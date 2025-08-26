//Stampo o primi 128 caratteri ascii
#include <stdio.h>

int main() {
    printf("Stampa dei caratteri ascii!\n");

    for (int i = 0; i <= 128; i++) {
        printf("Carattere: %d <> ASCII: %c\n", i, (char)i);
    }

    return 0;
}