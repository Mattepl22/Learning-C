//Funzione che inverte un numero
#include <stdio.h>

int inverti(int number) {
    int conv = 0;
    while (number > 0) {
        conv *= 10;
        conv += (number % 10);
        number /= 10;
    }
    return conv;
}

int main() {
    int number = 1234;

    printf("%d\n", inverti(number));

    return 0;
}