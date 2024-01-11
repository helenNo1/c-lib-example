#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    int change = 0;
    pid_t pid;
    pid = fork();
    if (pid == 0)
    { // child process code

        printf("this is child1\n");
        sleep(1);
        while (change == 0)
            ;
        printf("this is child2\n");
    }
    else if (pid > 0)
    { // parent process code
        printf("this is parent process\n");
        change = 1;
        sleep(1);
    }
    return 0;
}
