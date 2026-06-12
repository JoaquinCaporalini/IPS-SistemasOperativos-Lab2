#include <stdio.h>
#include <pthread.h>
#include <assert.h>

#define CANT_HILOS 5
#define CANT_LINEAS_LEER 63

typedef struct{
    int indice;
    FILE *lectura;
    FILE *escritura;
    int *arreglo;
    char *mensaje;
} Datos_hilo;

void *funcion_hilo(void *arg){
    Datos_hilo *datos = (Datos_hilo *)arg;

    printf("Hola desde el %s\n", datos->mensaje);
    
    char linea[1024];

    for (int i = 0; i < CANT_LINEAS_LEER && fscanf(datos->lectura, "%1024[^\n]%*c", linea) == 1; i++) {
        printf("[%s] %s\n", datos->mensaje, linea);
        fprintf(datos->escritura, "El hilo %s realizó una lectura %d\n", datos->mensaje, i);
        assert(i != CANT_LINEAS_LEER - 1);
    }

    if (datos->indice == 0) {
        for (int i = 0; i < CANT_HILOS; i++) {
            datos->arreglo[i] = i;
        }
    } else {
        while(!datos->arreglo[datos->indice]);
        printf("Soy el %s y lei el valor %d\n", datos->mensaje, datos->arreglo[datos->indice]);
    }

    return NULL;
}

int main(){
    pthread_t hilos[CANT_HILOS]; // Referencia al hilo
    char *mensaje[CANT_HILOS] = { "hilo 1", "hilo 2", "hilo 3", "hilo 4", "hilo 5"};

    Datos_hilo datos[CANT_HILOS];
    FILE *lectura = fopen("codigo17_lectura.txt", "r");
    FILE *escritura = fopen("codigo17_escritura.txt", "w");
    int arr[CANT_HILOS] = {0};

    // Crea un hilo que ejecutara la funcion funcion_hilo
    for (int i = 0; i < CANT_HILOS; i++) {
        datos[i].indice = i;
        datos[i].lectura = lectura;
        datos[i].escritura = escritura;
        datos[i].arreglo = arr;
        datos[i].mensaje = mensaje[i];
        pthread_create(&hilos[i], NULL, funcion_hilo, (void *)&datos[i]);
    }

    printf("Hola desde el hilo principal\n");

    // Espera a que el hilo termine
    for (int i = 0; i < CANT_HILOS; i++) {
        pthread_join(hilos[i], NULL);
    }
    
    return 0;
}