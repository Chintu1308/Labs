#include <unistd.h>
#include <stdio.h>
int main()
{
    char buff[20];
    printf("Enter any text");
    read(0, buff, 10);
    printf("Your text is read as");
    write(1, buff, 10);
    printf("\n");
    return 0;
}