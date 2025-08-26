#include <stdio.h>

int main(){
    //Inizializzazione valori
    float base = 0.0, altezza = 0.0, area = 0.0;

    //Input dei valori
    printf("Valore altezza: ");
    scanf("%f\n", &altezza);
    printf("Valore base: ");
    scanf("%f\n", &base);

    //Calcolo area
    area = base * altezza;

    //Stampa dei valori a schermo
    printf("Area del rettangolo: %.2f\n", area);

    return 0;
}