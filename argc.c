#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    DIR *dp;
    struct dirent *dirp;

    if (argc < 2)
    {
        printf("\n Only 1 argument provided\n");
        exit(1);
    }

    if ((dp = opendir(argv[1])) == NULL)
    {
        printf("\n Can not open %s file\n", argv[1]);
        exit(1);
    }

    while ((dirp = readdir(dp)) != NULL)
    {
        printf("%s\n", dirp->d_name);
    }
    
    closedir(dp);
}