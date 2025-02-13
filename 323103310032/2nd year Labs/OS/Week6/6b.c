#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main() {
    pid_t c,c1;
    printf("before fork of c:\n");
    c=fork();
    if(c==0)
    {
        printf("I am c1 having id:%d\n",getpid());
        printf("my parent c id is:%d\n",getppid());
        printf("before fork of c1:\n");
        c1=fork();
        if(c1==0)
        {
            sleep(2);
            printf("after termination\n");
            printf("i am c2 having id:%d\n",getpid());
            printf("my parent c1 id is:%d\n",getppid());
            
        }
        else
        {
            printf("I am c1 having id:%d\n",getpid());
        printf("my child c2 id is:%d\n",c1);
        }
    }
    else
    {
         printf("I am c having id:%d\n",getpid());
        printf("my child c1 id is:%d\n",c);
    }
    return 0;
}