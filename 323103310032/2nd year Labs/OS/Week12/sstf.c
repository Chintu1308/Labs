#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int queue[20], n, head, i, j, pos, diff, seek = 0, min, min_index;
    float avg;
    bool visited[20] = {false};

    printf("Enter the max range of disk: ");
    int max;
    scanf("%d", &max);

    printf("Enter the size of queue request: ");
    scanf("%d", &n);

    printf("Enter the queue of disk positions to be read\n");
    for (i = 0; i < n; i++)
        scanf("%d", &queue[i]);

    printf("Enter the initial head position: ");
    scanf("%d", &head);

    int current = head;

    for (i = 0; i < n; i++) {
        min = 100000;
        min_index = -1;

        for (j = 0; j < n; j++) {
            if (!visited[j]) {
                diff = abs(current - queue[j]);
                if (diff < min) {
                    min = diff;
                    min_index = j;
                }
            }
        }

        visited[min_index] = true;
        printf("Disk head moves from %d to %d with seek %d\n", current, queue[min_index], min);
        seek += min;
        current = queue[min_index];
    }

    printf("Total seek time is %d\n", seek);
    avg = seek / (float)n;
    printf("Average seek time is %f\n", avg);

    return 0;
}
