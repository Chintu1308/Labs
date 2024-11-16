//towers of honai problem using recursive function
#include <stdio.h>
void move(int n,char source,char dest,char inter)
{
    if(n==1)
    {
        printf("Move disk 1 from %c to %c\n",source,dest);
        return;
    }
    move(n-1,source,inter,dest);
    printf("Move disk %d from %c to %c\n",n,source,dest);
    move(n-1,inter,dest,source);
}
int main()
{
    int n;
    printf("Enter the number of disks\n");
    scanf("%d",&n);
    move(n,'A','C','B');
    return 0;
}