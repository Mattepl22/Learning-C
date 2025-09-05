/*
Scrivete un programma che chieda all'utente di immettere un numero n e sucessivamente stampi tutti i quadrati pari compresi tra 1 ed n. 
Per esempio, se l'utente immettesse 100, il programma dovrebbe stampare il seguente risultato:

    4
    16
    36
    64
    100 
*/

#include <stdio.h>

int main()
{
    int numero = 0, index = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    while (1) {
        if (((index * index) % 2 == 0) && ((index * index)) <= numero) {
            printf("%d\n", index * index);
        } else if ((index * index) > numero) {
            break;
        }
        index++;
    }

    return 0;
}