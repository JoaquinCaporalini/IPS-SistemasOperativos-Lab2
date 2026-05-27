#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    
    int pid1 = -1, pid2 = -1;

    pid1 = fork();
    if(0 < pid1){
        pid2 = fork();
    }

    if (pid1 == 0)
        sleep(5);
    if (pid2 == 0)
        sleep(10);

    if (0 < pid1 && 0 < pid2){
        waitpid(pid1, NULL, 0);
        waitpid(pid2, NULL, 0);
    }

    printf("[%d] Fin\n", getpid());
        
    
}