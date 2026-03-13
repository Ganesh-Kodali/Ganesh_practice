#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

/*
 * Function: print_long_format()
 * Purpose : Print file info like 'ls -l'
 * Inputs  : path - directory path
 *           filename - name of the file inside that directory
 */
void print_long_format(char *path, char *filename) {

    char fullpath[1024];
    struct stat st;

    // Build complete path: example "/home/user/file.txt"
    sprintf(fullpath, "%s/%s", path, filename);

    // stat() gives information about file (permissions, size, etc.)
    if (stat(fullpath, &st) == -1) {
        perror("stat");
        return;
    }

    // ---------------- FILE TYPE ----------------
    // d = directory, l = link, - = normal file
    printf( S_ISDIR(st.st_mode) ? "d" :
            S_ISLNK(st.st_mode) ? "l" :
            "-" );

    // ---------------- PERMISSIONS ----------------
    // Owner permissions
    printf((st.st_mode & S_IRUSR) ? "r" : "-");
    printf((st.st_mode & S_IWUSR) ? "w" : "-");
    printf((st.st_mode & S_IXUSR) ? "x" : "-");

    // Group permissions
    printf((st.st_mode & S_IRGRP) ? "r" : "-");
    printf((st.st_mode & S_IWGRP) ? "w" : "-");
    printf((st.st_mode & S_IXGRP) ? "x" : "-");

    // Others permissions
    printf((st.st_mode & S_IROTH) ? "r" : "-");
    printf((st.st_mode & S_IWOTH) ? "w" : "-");
    printf((st.st_mode & S_IXOTH) ? "x" : "-");

    // ---------------- LINKS, OWNER, GROUP ----------------
    printf(" %ld ", st.st_nlink);                       // number of links
    printf("%s ", getpwuid(st.st_uid)->pw_name);        // owner name
    printf("%s ", getgrgid(st.st_gid)->gr_name);        // group name
    printf("%ld ", st.st_size);                         // size in bytes

    // ---------------- LAST MODIFIED TIME ----------------
    char timebuf[64];
    // Format: "Jan 12 14:20"
    strftime(timebuf, sizeof(timebuf), "%b %d %H:%M", localtime(&st.st_mtime));  
    printf("%s ", timebuf);

    // ---------------- FILE NAME ----------------
    printf("%s\n", filename);
}



int main(int argc, char *argv[]) {

    int flag_a = 0;      // -a → show hidden files
    int flag_l = 0;      // -l → long listing
    char *path = ".";    // Default path = current directory

    /*
     * ---------------- ARGUMENT PARSING ----------------
     * Acceptable forms:
     *   ./myls
     *   ./myls -a
     *   ./myls -l
     *   ./myls -la    or    ./myls -al
     *   ./myls /path/to/dir
     */
    for (int i = 1; i < argc; i++) {

        // If "-a" → enable showing hidden files
        if (strcmp(argv[i], "-a") == 0)
            flag_a = 1;

        // If "-l" → enable long format
        else if (strcmp(argv[i], "-l") == 0)
            flag_l = 1;

        // If "-la" or "-al" → enable both
        else if (strcmp(argv[i], "-la") == 0 || strcmp(argv[i], "-al") == 0) {
            flag_a = 1;
            flag_l = 1;
        }

        // Otherwise treat argument as a directory path
        else
            path = argv[i];
    }

    /*
     * ---------------- OPEN DIRECTORY ----------------
     */
    DIR *dir = opendir(path);
    if (!dir) {
        perror("opendir");
        return 1;
    }

    struct dirent *entry;

    /*
     * ---------------- READ DIRECTORY ENTRIES ----------------
     * readdir() gives:
     *   ".", "..", "file.c", "folder", ...
     */
    while ((entry = readdir(dir)) != NULL) {

        // If -a is NOT used => skip hidden files (those starting with '.')
        if (!flag_a && entry->d_name[0] == '.')
            continue;

        // If -l flag is enabled → print long info
        if (flag_l)
            print_long_format(path, entry->d_name);
        else
            printf("%s  ", entry->d_name);  // Simple print
    }

    // Add newline only for normal listing
    if (!flag_l)
        printf("\n");

    closedir(dir);  // Close directory
    return 0;
}

