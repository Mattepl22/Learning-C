/*
Modificate il programma broker.c della Sezione 5.2 applicando le seguenti modifiche:
    (a) Chiedere all'utente di immettere un numero di azioni e il prezzo per azione invece di chiedere il valore dello scambio.

    (b) Aggiungere le istruzioni per il calcolo della commissione di un broker rivale (33$ e 3c ad azione per un volume inferiore alle 2000 azioni, 33$ e 2c ad
    azione per un volume pari o superiore alle 200 azioni). Visualizzare sia il valore della commissione del rivale che quella applicata dal broker originale.
*/

#include <stdio.h>

int main()
{
    float commission, value, numeroAzioni, prezzoAzione, commissioneRivale;
    
    printf("Inserisci il numero di azioni: ");
    scanf("%f", &numeroAzioni);

    printf("Inserisci il prezzo delle azioni: ");
    scanf("%f", &prezzoAzione);

    value = numeroAzioni * prezzoAzione;
    
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    if (numeroAzioni < 2000) 
        commissioneRivale = 33.03f * numeroAzioni;
    else
        commissioneRivale = 33.02f * numeroAzioni;
    
    printf("Commissione: $%.2f\n", commission);
    printf("Commissione rivale: $%.2f\n", commissioneRivale);
    
    return 0;
}