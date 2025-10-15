#include <stdio.h>
#include <dirent.h>  

int main(int argc, char *argv[])
{
    const char *path = "."; 

    DIR *dir = opendir(path);
    
    struct dirent *entry;
    
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_name[0] != '.')
            printf("%s\n", entry->d_name);
    }

    closedir(dir);
    return 0;
}

