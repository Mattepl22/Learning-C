//Stampa un array di interi 
#include <stdio.h>

void printArray(int array[], int dim){
    for (int i = 0; i < dim; i++) {
        printf("Elemento %d: %d\n", i, array[i]);
    }
}

int main() {
    int array[] = {0, 5, 4, 6, 8, 7};
    /*Calcolo la dimensione dell'array.
    sizeof(array) ritorna la dimensione in byte dell'array. int = 4 byte => sizeof(array) = 6 * 4 = 24
    sizeof(array[0]) ritorna la dimensione in byte dell'elemento in posizione 0 dell'array (ovvero 4)
    Dal calcolo viene dim = (6 * 4) / 4 = 6 elementi*/
    int dim = sizeof(array) / sizeof(array[0]);

    printArray(array, dim);

    return 0;
}