//Somma numeri da 1 a N fino a quando non viene stoppato
#include <stdio.h>

int main(){
    int max_num = 0, result = 0, i = 1;

    printf("Fino a che numero devo sommare?\n");
    scanf("%d", &max_num);

    //Controllo l'input che sia > 1
    if (max_num <= 1){
        printf("Valore non ammesso, deve essere > 1\n");
        return 1;
    }

    do {
        result += i;
        printf("Risultato intermedio: %d\n", result);
        i++;
    }
    while (i <= max_num);

    printf("Risultato finale: %d\n", result);

    return 0;
}