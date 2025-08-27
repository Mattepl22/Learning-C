/*
Scrivete un programma che chieda all'utente di immettere una frazione e successivamente riduca quella frazione ai minimi termini:

    Enter a fraction: 6/12
    In lowest terms: 1/2

Suggerimento: per ridurre una frazione ai minimi termini, per prima cosa calcolate il MCD del numeratore e del denominatore. Successivamente dividete sia il numeratore
che il denominatore per il MCD.
*/

#include <stdio.h>

int main()
{
    int num = 0, den = 0, mcd = 1, min = 0;

    printf("Inserisci una frazione: ");
    scanf("%d/%d", &num, &den);

    if (num > den) {
        mcd = num;
        min = den;
    } else {
        mcd = den;
        min = num;
    }

    while (min > 0) {
        mcd = min;
        min = mcd % min;
    }

    num /= mcd;
    den /= mcd;

    printf("Frazione semplificata: %d/%d\n", num, den);

    return 0;
}