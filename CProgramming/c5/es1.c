/*
Scrivete un programma che calcoli quante cifre sono contenute in un numero:
    Enter a number: 374
    The number 374 has 3 digits
Potete assumere che il numero non abbia più di quattro cifre. 
Suggerimento: usate l'istruzione if per controllare il numero. Per esempio, se il numero è tra O e 9
allora ha una sola cifra. Se il numero è tra 1O e 99 allora ha due cifre.
*/

#include <stdio.h>

int main()
{
    int num = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    if (num >= 0 && num < 10) {
        printf("Il numero è a una cifra.\n");
    } else if (num >= 10 && num < 100) {
        printf("Il numero è a due cifre.\n");
    } else if (num >= 100 && num < 1000) {
        printf("Il numero è a tre cifre.\n");
    } else if (num >= 1000 && num < 10000) {
        printf("Il numero è a quattro cifre.\n");
    }

    return 0;
}