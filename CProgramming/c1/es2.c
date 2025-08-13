/*
Scrivete un programma che calcoli il volume di una sfera con un raggio di 10
metri utilizzando la formula v=4/3pir^3· Scrivete la frazione 4/3 come 4.0f/3.0f'
(provate a scriverlo come 4/3, cosa succede?) Suggerimento: il C non possiede un' operatore 
esponenziale, quindi per calcolare r3 avrete la necessità di moltiplicare
r più volte per se stesso.
*/

#include <stdio.h>

#define QUATTRO_TERZI 4.0f/3.0f
#define PI 3.14f

int main()
{
    int raggio = 10;

    printf("Volume = %.2f\n", QUATTRO_TERZI * PI * raggio * raggio * raggio);

    return 0;
}