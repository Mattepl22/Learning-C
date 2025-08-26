//Versione migliorata del programma omonimo

#include <stdio.h>
#include <string.h> //Per usare strlen
#include <ctype.h> //Per convertire le maiuscole in minuscole

int main(){
    char stringa[500] = {}, carattere = ' ';
    int corrispondenza = 0;

    printf("Inserisci la frase da controllare:\n");
    fgets(stringa, sizeof(stringa), stdin);

    //Rimuovo il newline, se prensente
    //Serve perchè fgets include il carattere newline che voglio togliere nel confronto
    size_t len = strlen(stringa);
    if (len > 0 && stringa[len-1] == '\n'){
        stringa[len - 1] = '\0';
    }

    printf("Inserisci la lettera da confrontare: ");
    scanf(" %c", &carattere);

    //Converto tutte le maiuscole in minuscole
    carattere = tolower(carattere);

    for (size_t index = 0; index < strlen(stringa); index++){
        //size_t perchè strlen mi ritorna un tipo size_t
        char ch = tolower(stringa[index]);
        if(ch == carattere){
            corrispondenza++;
        }
    }

    printf("La frase contiene %d lettere '%c'\n", corrispondenza, carattere);

    return 0;
}