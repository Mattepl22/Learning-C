//Programma che prende una stringa data dall'utente e conta quante volte è ripetuta una certa lettera

#include <stdio.h>

int main(){
    char string[500] = {}, carattere = ' ';
    int corrispondenza = 0;

    printf("Inserisci la stringa interessata:\n");
    fgets(string, sizeof(string), stdin);

    printf("Inserisci la lettera da cercare: ");
    scanf(" %c", &carattere);

    for (int index = 0; index < sizeof(string); index++) {
        if (string[index] == carattere){
            corrispondenza += 1;
        }
    }

    printf("La frase contiene %d lettere %c\n", corrispondenza, carattere);

    return 0;
}
