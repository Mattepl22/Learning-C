//Funzione che scambia 2 variabili usando i puntatori
#include <stdio.h>

void invert(int *a, int *b) {
    int n = 0;
    n = *a;
    *a = *b;
    *b = n;
}

int main() {
    int a = 0, b = 0;

    printf("Inserisci il primo valore: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    invert(&a, &b);

    printf("Il primo numero è: %d\n", a);
    printf("Il secondo numero è: %d\n", b);

    return 0;
}