#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
    int pid, i = 10;
    pid = fork(); // fork a process

    if (pid < 0)
    {
        printf("\n Can not create the child\n");
        exit(1);
    }

    if (pid == 0)
    {
        printf("\n Child Process\n");
        printf("\n New Value = %d\n", i);
        i += 5;
        printf("\n N = %d\n", i);
        exit(1);
    }

    else
    {
        wait(10);
        printf("\n Parent process\n");
        printf("\n Value of I = %d\n", i);
    }

    return;
}