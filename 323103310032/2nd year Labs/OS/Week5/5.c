#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void) {
    pid_t pid1, pid2;
    int status;

    pid1 = fork();
    if (pid1 == 0) { // P1 child process
        printf("\n I am the child P1 of parent(P0) and my ID is %d\n", getpid());
        printf("\n My parent is (P0) and whose process ID is %d\n", getppid());

        pid2 = fork();
        if (pid2 == 0) { // P2 child process
            printf("\n I am the P1's child process (P2) and my ID is %d\n", getpid());
            printf("\n My parent is P1 process whose ID is %d\n", getppid());
        } else {
            waitpid(pid2, NULL, 0);
            printf("\n I am P1 my process id is %d\n", getpid());
            printf("\nMy child is P2 whose id is %d\n", pid2);
        }
    } else { // P0 parent process
        waitpid(pid1, NULL, 0);
        printf("\nI am P0 my process id is %d\n", getpid());
        printf("\nMy child is P1 whose id is %d\n", pid1);
    }

    return 0;
}