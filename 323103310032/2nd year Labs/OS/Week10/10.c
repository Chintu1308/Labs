// Implement Banker’s algorithm for the purpose of Deadlock avoidance in OS.

#include <stdio.h>

int main() {
    int p, r, count = 0, i, j, alc[5][3], max[5][3], need[5][3], safe[5], available[3], done[5], terminate = 0;

    printf("Enter the number of processes and resources: ");
    scanf("%d %d", &p, &r);

    printf("Enter allocation matrix (%dx%d):\n", p, r);
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &alc[i][j]);
        }
    }

    printf("Enter maximum resource requirement matrix (%dx%d):\n", p, r);
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    printf("Enter available resources: ");
    for (i = 0; i < r; i++) {
        scanf("%d", &available[i]);
    }

    // Calculate Need matrix
    printf("\nNeed matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            need[i][j] = max[i][j] - alc[i][j];
            printf("%d\t", need[i][j]);
        }
        printf("\n");
    }

    // Initialize process completion status
    for (i = 0; i < p; i++) {
        done[i] = 0;
    }

    // Find safe sequence
    while (count < p) {
        for (i = 0; i < p; i++) {
            if (done[i] == 0) {
                for (j = 0; j < r; j++) {
                    if (need[i][j] > available[j])
                        break;
                }

                if (j == r) {  // If all needs are met
                    safe[count] = i;
                    done[i] = 1;
                    for (j = 0; j < r; j++) {
                        available[j] += alc[i][j];  // Release resources
                    }
                    count++;
                    terminate = 0;
                } else {
                    terminate++;
                }
            }
        }

        if (terminate == (p - 1)) {
            printf("Safe sequence does not exist.\n");
            break;
        }
    }

    // If safe sequence exists, print it
    if (terminate != (p - 1)) {
        printf("\nAvailable resources after completion:\n");
        for (i = 0; i < r; i++) {
            printf("%d\t", available[i]);
        }

        printf("\nSafe sequence:\n");
        for (i = 0; i < p; i++) {
            printf("P%d\t", safe[i]);
        }
        printf("\n");
    }

    return 0;
}
