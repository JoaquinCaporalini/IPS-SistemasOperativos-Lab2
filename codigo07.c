#include <stdio.h>
#include <unistd.h>

int main(){
    
    printf("PID antes de fork: %d\n", getpid());

    int pid = fork();

    if (pid == 0) {
        printf("PID del hijo: %d\n", getpid());
    } else if (pid > 0) {
        printf("PID del padre: %d  y el PID del hijo es: %d\n", getpid(), pid);
    } else {
        printf("Error al crear el hijo\n");
    }

    return 0;
}