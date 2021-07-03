#include <signal.h>

#include "tlpi_hdr.h"

static void sigHandler(int sig)
{
    static int count = 0;

    if (sig == SIGINT)
    {
        count++;
        printf("Caught SIGINT (%d)\n", count);
        return;
    }

    printf("Caught SIGQUIT \n");
    exit(EXIT_SUCCESS);
}

int main(int argc, char *argv[])
{
    int j;

    if (signal(SIGINT, sigHandler) == SIG_ERR)
        //errExit("signal");
        printf("signal\n");

    if (signal(SIGQUIT, sigHandler) == SIG_ERR)
        //errExit("signal");
        printf("signal\n");

    printf("get_pid=%d\n",getpid());
    for (;;)
    {
        pause();
    }
}