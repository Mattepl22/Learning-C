//Programma che salta numeri dispari in un ciclo
#include <stdio.h>

int main(){
    int num = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    for (int index = 0; index <= num; index++) {
        if (index % 2 == 0) {
            printf("%d è pari!\n", index);
        } else {
            continue;
        }
    }

    return 0;
}