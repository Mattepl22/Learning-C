/*
Utilizzate l'istruzione switch per scrivere un programma che converta un voto numerico in un voto espresso attraverso una lettera:

Enter numerical grade: 84
Letter grade: B

Utilizzate la seguente scala: A= 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59. 
Stampate un messaggio di errore nel caso un cni il voto fosse maggiore di 100 o minore di O. 

Suggerimento: suddividete il voto in due cifre e poi utilizzate l'istruzione switch per testare la cifra delle decine.
*/

#include <stdio.h>

int main()
{
    int voto = 0;

    printf("Voto numerico: ");
    scanf("%d", &voto);

    if (voto > 100) {
        printf("Voto inesistente!\n");
        return 1;
    }

    switch (voto) {
        case 100: case 99: case 98: case 97: case 96: case 95: case 94: case 93: case 92: case 91: case 90:
            printf("Voto letterale: A\n");
            break;
        case 89: case 88: case 87: case 86: case 85: case 84: case 83: case 82: case 81: case 80:
            printf("Voto letterale: B\n");
            break;
        case 79: case 78: case 77: case 76: case 75: case 74: case 73: case 72: case 71: case 70:
            printf("Voto letterale: C\n");
            break;
        case 69: case 68: case 67: case 66: case 65: case 64: case 63: case 62: case 61: case 60:
            printf("Voto letterale: D\n");
            break;
        default:
            printf("Voto letterale: F\n");
            break;
    }

    return 0;
}