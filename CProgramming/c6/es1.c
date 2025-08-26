/*
Scrivete un programma che, data una serie di numeri immessi dall'utente, ne trova il maggiore. Il programma deve chiedere all'utente di immettere i numeri uno
alla volta. Quando l'utente immette un numero negativo o lo zero, il programma deve visualizzare il più grande numero non negativo immesso fino a quel momento:
    
    Enter a number: 60
    Enter a number: 38.3
    Enter a number: 4.89
    Enter a number: 100.62
    Enter a number: 75.2295
    Enter a number: 0

    The largest number entered was 100.62

Tenete presente che i numeri non sono necessariamente interi.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    float largest = -1.0, number = 0.0;

    while (true) {
        printf("Number: ");
        scanf("%f", &number);

        if (number <= 0) {
            break;
        }

        if (number > largest) {
            largest = number;
        }
    }

    printf("Il numero più grande è: %f\n", largest);

    return 0;
}