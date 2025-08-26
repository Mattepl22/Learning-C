//Programma con una funzione che trova il massimo tra 2 numeri
#include <stdio.h>

void maxNumber(float a, float b) {
    if (a > b) {
        printf("Il numero più grande è %0.2f.\n", a);
    } else if (a < b) {
        printf("Il numero più grande è %0.2f.\n", b);
    } else {
        printf("I due numeri sono uguali!\n");
    }
}

int main() {
    float a = 0.0f, b = 0.0f;
    
    printf("Inserisci il primo numero: ");
    scanf("%f", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%f", &b);

    maxNumber(a, b);

    return 0;
}