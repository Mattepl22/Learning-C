/*
Scrivete un programma che chieda all'utente un numero a due cifre e successivamente scriva la dicitura inglese per quel numero:
Enter a two-digit number: 45
You entered the number forty-five.
Suggerimento: suddividete il numero in due cifre. Usate uno switch per stampare la parola corrispondente alla prima cifra ("twenty", "thirty" e così via). Usate un
secondo costrutto switch per stampare la parola associata alla seconda cifra. Non dimenticate che i numeri tra 11 e 19 richiedono un trattamento speciale.
*/

#include <stdio.h>

int main()
{
    int c1 = 0, c2 = 0;

    printf("Inserisci un numero a 2 cifre: ");
    scanf("%1d%1d", &c1, &c2);

    if (c1 == 1) {
        // Caso speciale: numeri da 10 a 19
        switch (c2 + 10) {
            case 10: printf("Ten\n"); break;
            case 11: printf("Eleven\n"); break;
            case 12: printf("Twelve\n"); break;
            case 13: printf("Thirteen\n"); break;
            case 14: printf("Fourteen\n"); break;
            case 15: printf("Fifteen\n"); break;
            case 16: printf("Sixteen\n"); break;
            case 17: printf("Seventeen\n"); break;
            case 18: printf("Eighteen\n"); break;
            case 19: printf("Nineteen\n"); break;
        }
    } else {
        // Prima cifra (decine)
        switch (c1) {
            case 2: printf("Twenty"); break;
            case 3: printf("Thirty"); break;
            case 4: printf("Forty"); break;  // CORRETTO!
            case 5: printf("Fifty"); break;
            case 6: printf("Sixty"); break;
            case 7: printf("Seventy"); break;
            case 8: printf("Eighty"); break;
            case 9: printf("Ninety"); break;
        }

        // Seconda cifra (unità) solo se diversa da 0
        if (c2 != 0) {
            switch (c2) {
                case 1: printf("-One\n"); break;
                case 2: printf("-Two\n"); break;
                case 3: printf("-Three\n"); break;
                case 4: printf("-Four\n"); break;
                case 5: printf("-Five\n"); break;
                case 6: printf("-Six\n"); break;
                case 7: printf("-Seven\n"); break;
                case 8: printf("-Eight\n"); break;
                case 9: printf("-Nine\n"); break;
            }
        } else {
            printf("\n");
        }
    }

    return 0;
}