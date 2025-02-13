#include <stdio.h>
#include <unistd.h> // read() and close() sys calls
#include <sys/types.h> // Specific data types for process
#include <sys/stat.h> // Constants for file permissions in open() sys call
#include <fcntl.h> // open() sys call

int main() {
    int n, fd;
    char buff[50];
    fd = open("test.txt", O_RDONLY); // Opens test.txt in read mode
    printf("The file descriptor of the file is: %d\n", fd);
    n = read(fd, buff, 10); // Reads 10 characters into the buffer
    write(1, buff, n); // Writes buffer content to screen
    return 0;
}