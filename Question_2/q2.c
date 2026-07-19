#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed\n");
        return 1;
    } else if (pid == 0) {
        printf("Child process running... simulating a freeze.\n");
        while(1) {
            sleep(1);
        }
    } else {
        printf("Parent monitoring child (PID: %d)...\n", pid);
        sleep(4); 
        
        int status;
        if (waitpid(pid, &status, WNOHANG) == 0) {
            printf("Child is unresponsive. Killing it...\n");
            kill(pid, SIGKILL);
            
            waitpid(pid, &status, 0);
            printf("Child terminated and cleaned up.\n");
        } else {
            printf("Child finished.\n");
        }
    }
    return 0;
}
