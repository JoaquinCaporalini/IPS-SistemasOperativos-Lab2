#include <stdio.h>
#include <pthread.h>

void *funcion_hilo(void *arg){
    printf("Hola desde el hilo\n");
    return NULL;
}

int main(){
    pthread_t hilo; // Referencia al hilo

    // Crea un hilo que ejecutara la funcion funcion_hilo
    pthread_create(&hilo, NULL, funcion_hilo, NULL);

    printf("Hola desde el hilo principal\n");

    return 0;
}