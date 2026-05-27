#include <stdio.h>
#include <unistd.h>

int main() {
    // Ruta absoluta del ejecutable 'uname'
    char *path = "/usr/bin/uname";

    // Argumentos para execv:
    // argv[0] por convención es el nombre del ejecutable.
    // argv[1] es "-a" para mostrar toda la información del sistema.
    // El arreglo debe terminar con NULL.
    char *args[] = {"uname", "-a", NULL};

    printf("Llamando a uname con execv...\n");

    // execv reemplaza la imagen del proceso actual con la del nuevo comando.
    // Si tiene éxito, no retorna.
    execv(path, args);

    // Si execv retorna, significa que hubo un error.
    perror("Error al ejecutar execv");
    printf("ESTO NUNCA SE EJECUTA SI EXECV FUNCIONA CORRECTAMENTE");
    return 1;
}
