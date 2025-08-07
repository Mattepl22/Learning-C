//Funzione che stampa un triangolo di altezza N
#include <stdio.h>

int main(){
    int altezza = 0, n_spaziCentr = 1;

    printf("Altezza triangolo: ");
    scanf("%d", &altezza);

    if (altezza <= 1) {
        printf("Non può essere usato questo valore. Deve essere usato un numero maggiore di 1!\n");
        return 1;
    }

    for (int index = altezza; index >= 1; index--) {
        for (int n_spazi = 1; n_spazi <= (index - 1); n_spazi++) {
            printf(" ");
        }

        if (index == altezza){
            printf("*\n");
        } else {
            printf("*");
            for (int n_sc = 0; n_sc < n_spaziCentr; n_sc++){
                printf(" ");
            }
            n_spaziCentr += 2;
            printf("*\n");
        }          
    }

    return 0;
}