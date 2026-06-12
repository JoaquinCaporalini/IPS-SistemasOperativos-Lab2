#include <stdio.h>
#include <pthread.h>


void *contar_cant_palabras(void *arg){
    char *nombre_archivo = (char *)arg;
    
    return NULL;
}

int main(int argc, char* argv[]){
    char** archivos = argv + 1;       // El primero es el nombre del ejecutable
    int cantidad_archivos = argc - 1; // Cantidad de archivos a procesar

    for (int i = 0; i < cantidad_archivos; i++) {
        printf("Archivo: %s\n", archivos[i]); // Esto es solo para que se convenzan
                                             // que se recibe como argumento
    }

    return 0;
}

// TIP: Sabiendo el nombre del archivo se puede pasar a cada hilo como argumento
//      casteando a (void *)