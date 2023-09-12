#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
    pid_t pid = fork (); // fork() is a function in C/C++ that clones a process, spawning an identical copy (Child Process)
    
    /*
    The fork() function returns twice: 
    In the parent process, fork() return the process id (pid_t) of the child process. 
    In the child process, fork() returns 0. 
    */

    if (pid != 0) {
        waitpid (pid, NULL, 0); // Syntax: waitpid (pid_t pid, int *status, int options);
    }

    /*
    Reason for halting parent process before executing child process:

    - Since there’s two programs now executing the same code (the parent and the child process). 
      The order of execution is not guaranteed.
    - waitpid will pause the execution of the parent child until the child process completes – in this case, print “Hello World!”
    - This guaranteed that the child process will print Hello, World! before the parent process does.
    */

    printf ("Hello, World!\n");


    pid_t pid1 = fork();
    
    if (pid1 == 0) { // we are in the child process
        printf("Hello from the child process!\n");
        exit (0); // terminates the child process
    } else {
        // now in the parent process
        waitpid(pid1, NULL, 0);
        printf("The child process has exited. Hello from the parent!\n");
    }
    
    return 0;
}