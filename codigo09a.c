#include <stdio.h>
#include <unistd.h>

int main(){
    
    int pid = fork();

    if (pid == 0) {

        sleep(5);
        printf("> HIJO  <\n");

    } else if (pid > 0) {
        printf("> PADRE <\n");
    } else {
        printf("Error al crear el hijo\n");
    }

    return 0;
}