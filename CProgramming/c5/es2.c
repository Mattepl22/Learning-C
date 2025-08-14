/*
Scrivete un programma che chieda all'utente un orario nel formato a 24 ore e successivamente visualizzi lo stesso orario nel formato a 12 ore:
    Enter a 24-hour time: 21:11
    Equivalent 12-hour time: 9:11 PM
Fate attenzione a non visualizzare 12:00 come 0:00.
*/

#include <stdio.h>

int main()
{
    int h = 0, m = 0;

    printf("Inserisci l'ora in formato 24h: ");
    scanf("%d:%d", &h, &m);

    if (h == 0 || h == 00) {
        h = 24;
    }

    if (h > 11 && h < 24) {
        h -= 12;
        printf("L'ora nel formato 12h è: %.2d:%.2d PM\n", h, m);
    } else if (h > 23) {
        h -= 12;
        printf("L'ora nel formato 12h è: %.2d:%.2d AM\n", h, m);
    } else {
        printf("L'ora nel formato 12h è: %.2d:%.2d AM\n", h, m);
    }

    return 0;
}