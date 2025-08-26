//Interrompo stampa dopo aver trovato un multiplo di 7
#include <stdio.h>

int main(){
    int num = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    while (num % 7 != 0) {
        printf("%d non è un multiplo di 7.\n", num);
        printf("Inserisci un nuovo numero: ");
        scanf("%d", &num);
    }

    printf("%d è un multiplo di 7!\n", num);

    return 0;
}