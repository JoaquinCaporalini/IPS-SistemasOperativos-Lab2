#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define CANT 3

void leer10lineas(FILE * archivo){
    char linea[100];

    for(int i=0;i<10;i++){
        fscanf(archivo, "%[^\n]%*c", linea);
        printf("%s\n",linea); // Agrego el salto de linea porque si no no hace nada
    }
}

void mostrarArreglo(int* arr, int cant){
    for(int i=0;i<cant;i++){
        printf("%d\n",arr[i]);
    }
}

void mostrarArgumentos(char* argv[]){
    for(int i=0;argv[i]!=NULL;i++){
        printf("%s\n",argv[i]);
    }
}

int main(int argc, char *argv[]){
    
    FILE * archivo;

    int arreglo[3];
    for (int i = 0; i < CANT; i++) arreglo[i] = i+1;

    mostrarArreglo(arreglo, CANT);

    archivo = fopen("codigo04.txt", "r");
    if(archivo == NULL){
        printf("Error al abrir el archivo");
        return 1;
    }

    leer10lineas(archivo);
    mostrarArreglo(arreglo, CANT);

    

    
    srand(fork()); // Definimos la semilla del generador de numeros 
                   // aleatorios usando el retorno de fork() 

    
    leer10lineas(archivo);
    
    mostrarArgumentos(argv);

    mostrarArreglo(arreglo, CANT);
    int rd = rand() % CANT;
    printf("El numero aleatorio es: %d\n", rd);
    arreglo[rd] = 1635415364;
    mostrarArreglo(arreglo, CANT);
    
    fclose(archivo);

    return 0;
}