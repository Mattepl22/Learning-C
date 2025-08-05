#include <stdio.h>
#include <stdbool.h>

int main(){
    float a = 0.0f, b = 0.0f, result = 0.0f;
    char operation = ' ';
    bool ok_operation = false;

    printf("Inserisci il primo numero: ");
    scanf("%f", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &b);
    printf("Che operazione vuoi compiere? ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        ok_operation = true;
        result = a + b;
        break;
    case '-':
        ok_operation = true;
        result = a - b;
        break;
    case '*':
        ok_operation = true;
        result = a * b;
        break;
    case '/':
        if (b != 0){
            ok_operation = true;
            result = a / b;
        } else {
            printf("Impossibile dividere per 0\n");
        }
        break;
    default:
        printf("Operazione non valida!\n");
        break;
    }

    if (ok_operation){
        printf("Risultato: %.2f\n", result);
    }

    return 0;
}