//Scrivere una funzione che somma due numeri

#include <stdio.h>

float sum(float a, float b) {
    return a + b;
}

int main() {
    float a = 0.0f, b = 0.0f, result = 0.0f;

    printf("Inserisci il primo numero: ");
    scanf("%f", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%f", &b);

    result = sum(a, b);

    printf("Il risultato della somma è %.2f\n", result);

    return 0;
}