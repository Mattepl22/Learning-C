/*
Scrivete un programma in grado di trovare il minimo e il massimo tra quattro numeri immessi dall'utente:
    Enter four integers: 21 43 10 35
    Largest: 43
    Smallest: 10
Utilizzate il minor numero di istruzioni possibili. 
Suggerimento: Quattro istruzioni if sono sufficienti.
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    int min = 0, min1 = 0, min2 = 0;
    int max = 0, max1 = 0, max2 = 0;
    
    printf("Inserisci 4 valori: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a < b) {
        min1 = a;
        max1 = b;
    } else {
        min1 = b;
        max1 = a;
    }

    if (c < d) {
        min2 = c;
        max2 = d;
    } else {
        min2 = d;
        max2 = c;
    }

    if (min1 < min2) {
        min = min1;
    } else {
        min = min2;
    }

    if (max1 > max2) {
        max = max1;
    } else {
        max = max2;
    }

    printf("Massimo: %d\n", max);
    printf("Minimo: %d\n", min);

    return 0;
}