#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
    int pid;
    pid = fork(); // fork a process

    if (pid == 0)
    {
        printf("\n Child Process Stats\n");
        printf("\n Child Process ID is : %d\n", getpid());
        printf("\n Parent Process ID is : %d\n", getppid());

        sleep(5);

        printf("\n Child Process continuing ...\n");
        printf("\n Child Process ID is : %d\n", getpid());
        printf("\n Parent Process ID is : %d\n", getppid());
    }

    else
    {
        printf("\n Parent Process Starts\n");

        sleep(10);
        
        printf("\n Process continuing ...\n");
        printf("\n Own Process ID is : %d\n", getpid());
        printf("\n Parent Process ID is : %d\n", getppid());

        printf("\n Parent Process Terminate !!!\n");
    }

    return;
}