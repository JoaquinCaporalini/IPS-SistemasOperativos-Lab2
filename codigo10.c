#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    
    int pid = fork();

    if (pid == 0) {

        sleep(5);
        printf("> HIJO  <\n");
        return 1;

    } else if (pid > 0) {

        int status;
        waitpid(pid, &status, 0);
        printf("> PADRE <\n");
        printf("Retorno del hijo (codigo exit): %d\n", WEXITSTATUS(status));
    } else {
        printf("Error al crear el hijo\n");
    }

    return 0;
}