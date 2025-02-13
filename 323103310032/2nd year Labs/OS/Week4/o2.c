#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    int n, fd1, fd2;
    char buff[50];
    fd1 = open("test.txt", O_RDONLY); // Opens test.txt in read mode
    fd2 = open("HELLO.txt", O_WRONLY); // Opens HELLO.txt in write-only mode
    printf("The file descriptor of test.txt is: %d\n", fd1);
    printf("The file descriptor of HELLO.txt is: %d\n", fd2);
    n = read(fd1, buff, 20); // Reads 20 characters from test.txt
    write(fd2, buff, n); // Writes to HELLO.txt
    return 0;
}
