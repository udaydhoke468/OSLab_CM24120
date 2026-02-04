---------Orphan process code:--------- 
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        printf("Parent process exiting\n");
    } else if (pid == 0) {
        sleep(10);
        printf("Child process running. Parent PID: %d\n", getppid());
    }
    return 0;
}
--------zombie process code:-----------
#include <stdio.h>
#include <unistd.h>

int main() {
    if (fork() == 0) {
        printf("Child exiting\n");
    } else {
        sleep(20);
        printf("Parent alive\n");
    }
    return 0;
}
------child and parent creation code:--------
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Child Process | PID: %d\n", getpid());
    } else {
        printf("Parent Process | PID: %d\n", getpid());
    }
    return 0;
}