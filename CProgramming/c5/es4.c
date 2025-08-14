/*
Ecco una versione semplificata della scala di Beefourt che viene utilizzata per determinare la forza del vento:
    Velocità (nodi)     Descrizione
    Minore di 1         Calmo
    1 - 3               Bava di vento
    4-27                Brezza
    28 - 47             Burrasca
    48 - 63             Tempesta
    Oltre 63            Uragano
Scrivete un programma che chieda all'utente di immettere un valore di velocità del vento (in nodi) e visualizzi di conseguenza la descrizione corrispondente.
*/

#include <stdio.h>

int main()
{
    int nodi = 0;

    printf("Inserisci la forza del vento in nodi: ");
    scanf("%d", &nodi);

    if (nodi < 0) 
        nodi = 0;

    switch (nodi)
    {
    case 0:
        printf("Calmo\n");
        break;
    case 1: case 2: case 3:
        printf("Bava di vento\n");
        break;
    case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
    case 21: case 22: case 23: case 24: case 25: case 26: case 27:
        printf("Brezza\n");
        break;
    case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43: case 44:
    case 45: case 46: case 47:
        printf("Burrasca\n");
        break;
    case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 59: case 60: case 61: case 62: case 63:
        printf("Tempesta\n");
        break;
    default:
        printf("Uragano\n");
        break;
    }

    return 0;
}