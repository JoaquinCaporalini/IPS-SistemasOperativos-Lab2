#include <stdio.h>
#include <unistd.h>

int main(){
    
    int pid = fork();

    if (pid == 0) {
        printf("Soy el hijo\n");
    } else if (pid > 0) {
        printf("Soy el padre\n");
    } else {
        printf("Error al crear el hijo\n");
    }

    return 0;
}