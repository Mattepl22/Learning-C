//Funzione che converte i voti numerici in voti letterali
#include <stdio.h>

int main(){
    int voto = 0;

    printf("Voto: ");
    scanf("%d", &voto);

    switch (voto) {
        case 1: 
        case 2:
        case 3:
        case 4: 
            printf("Gravemente insufficiente!\n");
            break;
        case 5:
            printf("Insufficiente!\n");
            break;
        case 6:
            printf("Sufficiente!\n");
            break;
        case 7: 
        case 8:
            printf("Buono!\n");
            break;
        case 9:
        case 10:
            printf("Ottimo!\n");
            break;
        default:
            printf("Non è un voto!\n");
    }

    return 0;
}