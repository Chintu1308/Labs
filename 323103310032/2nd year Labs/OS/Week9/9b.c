#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>

#define BUF_SIZE 10

int buffer[BUF_SIZE], in = 0, out = 0;
sem_t empty, full, mutex;

void producer() {
    int produce;
    printf("\nEnter the value to produce: ");
    scanf("%d", &produce);
    sem_wait(&empty);
    sem_wait(&mutex);
    buffer[in] = produce;
    in = (in + 1) % BUF_SIZE;
    printf("\nProduced value: %d", produce);
    sem_post(&mutex);
    sem_post(&full);
}

void consumer() {
    int consume;
    sem_wait(&full);
    sem_wait(&mutex);
    consume = buffer[out];
    out = (out + 1) % BUF_SIZE;
    printf("\nConsumed value: %d", consume);
    sem_post(&mutex);
    sem_post(&empty);
}

int main() {
    system("clear");
    int choice;
    sem_init(&empty, 0, BUF_SIZE);
    sem_init(&full, 0, 0);
    sem_init(&mutex, 0, 1);
    while (1) {
        printf("\n1. Produce \t 2. Consume \t 3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                producer();
                break;
            case 2:
                consumer();
                break;
            case 3:
                printf("\nExiting...\n");
                sem_destroy(&empty);
                sem_destroy(&full);
                sem_destroy(&mutex);
                return 0;
            default:
                printf("\nInvalid choice! Please try again.");
        }
    }
    return 0;
}
