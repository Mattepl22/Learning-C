/*
Scrivete un programma che chieda all'utente di immettere due interi e poi calcoli e visualizzi il loro massimo comun divisore (MCD):

    Enter two integers: 12 28
    Greatest common divisor: 4

Suggerimento: l'algoritmo classico per il calcolo dell'MCD, conosciuto come algoritmo di Euclide, agisce in questo modo: siano m ed n le variabili contenenti i due
numeri. Assumendo che m sia maggiore di n, se n è uguale a O allora ci si ferma perché m contiene il MCD.Altrimenti calcola il resto della divisione tra m ed n. Si
deve copiare il contenuto di n in m e copiare il resto ottenuto dalla divisione in n. Il procedimento va ripetuto, verificando se n è uguale a O.
*/

#include <stdio.h>

int main()
{
    int m = 0, n = 0, temp = 0;

    printf("Inserisci due numeri: ");
    scanf("%d %d", &m, &n);

    if (m < 0) {
        m *= (-1);
    }

    if (n < 0) {
        n *= (-1);
    }

    if (m < n) {
        temp = m;
        m = n;
        n = temp;
    }

    while (n > 0) {
        m = n;
        n = m % n;
    }

    printf("Il MCD è: %d\n", m);

    return 0;
}