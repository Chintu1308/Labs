#include <unistd.h>
#include <stdio.h>
int main()
{
    char buff[20];
    printf("\n Enter any text");
    read(0, buff, 10);
    printf("\n Your text is read as");
    write(1, buff, 10);
    return 0;
}