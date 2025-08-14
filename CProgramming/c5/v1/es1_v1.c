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
    int num = 0, cifre = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    while (num > 0) {
        num /= 10;
        cifre++;
    }

    printf("Il numero è a %d cifre.\n", cifre);

    return 0;
}