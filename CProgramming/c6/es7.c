/*
Scrivete un programma che stampi il calendario di un mese. 
L'utente deve specificare il numero di giorni nel mese e il giorno della settimana in cui questo comincia:
    Enter number of days in month: 31
    Enter starting day of the week (l=Sun, 7=Sat): 3
        1 2 3 4 5
    6 7 8 9 10 11 12
    13 14 15 16 17 18 19
    20 21 22 23 24 25 26
    27 28 29 30 31
Suggerimento: questo programma non è difficile come sembra. La parte più importante è il ciclo for che usa la variabile i per contare da 1 a n (dove n è il
numero di giorni del mese) e stampa tutti i valori di i. All'interno del ciclo
un'istruzione if controlla se i è l'ultimo giorno della settimana e in quel caso
stampa un carattere new-line. 
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int giorniMese = 0, giornoSettimana = 0, giornoMese = 1;

    printf("Inserisci il numero di giorni del mese: ");
    scanf("%d", &giorniMese);

    printf("Inserisci il giorno di partenza della settimana (1 = Lun, 7 = Dom): ");
    scanf("%d", &giornoSettimana);

    if (giornoSettimana > 1) {
        for (int index = 1; index < giornoSettimana; index++) {
            printf(" \t");
        }
    }

    while (giornoMese <= giorniMese) {
        for (; giornoSettimana <= 7; giornoSettimana++) {
            printf("%d\t", giornoMese);
            giornoMese++;
            if (giornoMese > giorniMese) {
                break;
            }
        }
        giornoSettimana = 1;
        printf("\n");
    }

    return 0;
}