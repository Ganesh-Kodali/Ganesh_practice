#include <stdio.h>
#include <pthread.h>

int counter = 0;
pthread_mutex_t lock;

void *increment(void *arg)
{
    int tid = *(int *)arg;   // Get thread number

        pthread_mutex_lock(&lock);
    for (int i = 0; i < 100000; i++)
    {

        counter++;

    }

        printf("T%d = %d\n", tid, counter);
        pthread_mutex_unlock(&lock);
    return NULL;
}

int main()
{
    pthread_t t1, t2;
    int id1 = 1, id2 = 2;

    pthread_mutex_init(&lock, NULL);

    pthread_create(&t1, NULL, increment, &id1);
    pthread_create(&t2, NULL, increment, &id2);
    pthread_create(&t2, NULL, increment, &id2);
pthread_create(&t1, NULL, increment, &id1);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    pthread_mutex_destroy(&lock);

    printf("Final Counter Value = %d\n", counter);

    return 0;
}
