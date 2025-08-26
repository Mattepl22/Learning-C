//Stampare una funzone 5x5 con numeri da 1 a 25
#include <stdio.h>

int main() {
    int num = 0;

    for (int row = 0; row < 5; row++) {
        for (int column = 0; column < 5; column++) {
            num++;
            if (column <= 4) {
                printf("%d\t", num);
            }           
        }
        printf("\n"); 
    }

    return 0;
}