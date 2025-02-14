#include <unistd.h>
#include <stdio.h>
int main()
{
    int nread;
    char buff[20];
    printf("\n Enter any text");
    nread = read(0, buff, 10);
    printf("\n Your text is read as");
    write(1, buff, nread); // Print characters from the buffer on the screen
    printf("\n Number of characters read: %d", nread);
    printf("\n");
    return 0;
}