/*
In uno Stato i residenti sono soggetti alle seguenti imposte sul reddito:

    Reddito                         Ammontare imposta 

    Non superiore a 750$            1% del reddito 
    750$ - 2.250$                   7,50$ più il 2% della quota sopra i 750$ 
    2.250$- 3.750$                  37,50$ più il 3% della quota sopra i 2.250$ 
    3.750$ - 5.250$                 82,50$ più il 4% della quota sopra i 3.750$
    5.250$- 7.000$                  142,50$ più il 5% della quota sopra i 5.250$
    Oltre i 7.000$                  230,00$ più il 6% della quota sopra i 7.000$

Scrivete un programma che chieda all'utente di immettere il suo reddito imponibile e successivamente visualizzi l'imposta dovuta.
*/

#include <stdio.h>

int main()
{
    int reddito = 0; 
    float imposta = 0.0f;

    printf("Reddito: ");
    scanf("%d", &reddito);

    if (reddito < 750) {
        imposta = reddito * 0.01;
    } else if (reddito >= 750 && reddito < 2250) {
        imposta = reddito + 7.5 + ((reddito - 750) * 0.02);
    } else if (reddito >= 2250 && reddito < 3750) {
        imposta = reddito + 37.5 + ((reddito - 2250) * 0.03);
    } else if (reddito >= 3750 && reddito < 5250) {
        imposta = reddito + 82.5 + ((reddito - 3750) * 0.04);
    } else if (reddito >= 5250 && reddito < 7000) {
        imposta = reddito + 142.5 + ((reddito - 5250) * 0.05);
    } else if (reddito >= 7000) {
        imposta = reddito + 230.0 + ((reddito - 7000) * 0.06);
    }

    printf("Impposta dovuta: %.2f\n", imposta);

    return 0;
}