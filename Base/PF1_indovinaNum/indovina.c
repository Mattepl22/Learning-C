/*Gioco che genera un numero casuale tra 0 e 100 e per 10 volte chiede all'utente
di indovinare il numero. Se ci riesce esce un messaggio di vittoria, altrimenti gli 
comunica di aver perso*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number = 0, answer = 0, n_tentativi = 0;
    
    srand(time(0));
    number = rand() % 101;

    while (n_tentativi <= 10) {
        n_tentativi++;
        printf("Tentativo %d: Inserisci un numero tra 0 e 100: ", n_tentativi);
        scanf("%d", &answer);

        if (answer == number) {
            printf("Esatto! Hai indovinato in %d tentativi!\n", n_tentativi);
            break;
        } else {
            if ((n_tentativi < 10) && (answer > number)) {
                printf("Troppo alto!\n");
            } else if ((n_tentativi < 10) && (answer < number)) {
                printf("Troppo basso!\n");
            } else if (n_tentativi >= 10) {
                printf("Peccato. Il numero era %d\n", number);
            }
        }
    }


    return 0;
}