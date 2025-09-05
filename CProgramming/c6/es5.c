/*
Il Progetto di programmazione 1 del Capitolo 4 vi ha chiesto di scrivere un programma che visualizzi un numero a due cifre invertendo l'ordine di queste ultime. 
Generalizzate il programma in modo che il numero possa avere una, due, tre o più cifre. 
Suggerimento: usare un ciclo do che divide ripetutamente il numero per 10 fermandosi al raggiungimento dello O 
*/

#include <stdio.h>

int main()
{
    int numero = 0, numeroGirato = 0;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    do {
        numeroGirato = (numeroGirato * 10) + (numero % 10);
        numero /= 10;
    } while (numero > 0);

    printf("Il numero girato è: %d\n", numeroGirato);

    return 0;
}