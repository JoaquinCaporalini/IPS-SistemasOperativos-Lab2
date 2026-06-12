#include <stdio.h>
#include <pthread.h>

void *funcion_hilo(void *arg){
    char *mensaje = (char *)arg;
    printf("Hola desde el %s\n", mensaje);
    return NULL;
}

int main(){
    pthread_t hilo1; // Referencia al hilo
    pthread_t hilo2; // Referencia al hilo

    char *mensaje[] = { "hilo 1", "hilo 2"};

    // Crea un hilo que ejecutara la funcion funcion_hilo
    pthread_create(&hilo1, NULL, funcion_hilo, (void *)mensaje[0]);
    pthread_create(&hilo2, NULL, funcion_hilo, (void *)mensaje[1]);

    printf("Hola desde el hilo principal\n");

    // Espera a que el hilo termine
    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);
    
    return 0;
}