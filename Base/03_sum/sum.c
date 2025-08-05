#include <stdio.h>

int main(){
    int a = 0, b = 0, somma = 0, prodotto = 0, differenza = 0, resto = 0;
    float quoziente = 0.0;

    //Input dei numeri
    printf("Inserisci il primo valore: ");
    scanf("%d", &a);
    printf("Inserisci il secondo valore: ");
    scanf("%d", &b);

    //Calcolo della somma
    somma = a + b;

    //calcolo del prodotto
    prodotto = a * b;

    //Calcolo della differenza
    differenza = a - b;

    //Calcolo del quoziente e del resto
    if (b != 0) {
        quoziente = a / b;
        resto = a % b;
    } else {
        printf("Divisione per zero non permessa.\n");
        quoziente =  0;
        resto = 0;
    }

    //Stampa risultati
    printf("Somma: %d\n", somma);
    printf("Prodotto: %d\n", prodotto);
    printf("Differenza: %d\n", differenza);
    printf("Quoziente: %.2f\n", quoziente);
    printf("Resto: %d\n", resto);

    return 0;
}