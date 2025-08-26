#include <stdio.h>

int main(){
    //Dichiarazione di variabili con tipo diverso e stampa a schermo
    int intero = 10;
    float decimale = 3.141516;
    char carattere = 'A';
    char stringa[] = "C Programming";

    printf("Intero: %d\n", intero);
    printf("Decimale, 2 cifre: %.2f\n", decimale);
    printf("Decimale, 4 cifre: %.4f\n", decimale);
    printf("Decimale, senza vincoli: %f\n", decimale);
    printf("Carattere: %c\n", carattere);
    printf("Stringa: %s\n", stringa);

    return 0;
}