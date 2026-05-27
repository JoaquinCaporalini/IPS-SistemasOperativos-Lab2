#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[]){
    
    FILE * archivo;

    // Abrir el archivo "codigo05.txt" para escritura
    ...

    fork();

    char lectura[1024];

    // Leer desde el teclado a lectura
    ...

    // Escribir en el archivo lo que se leyo
    ...


    // Cerrar el archivo
    ...

    return 0;
}