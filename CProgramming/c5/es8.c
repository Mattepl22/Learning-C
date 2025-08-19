/*
La seguente tabella mostra i voli giornalieri tra due città:

    Orario Partenza         Orario Arrivo

    8:00 a.m.               10:16 a.m.
    9:43 a.m.               11:52 a.m.
    11:19 a.m.              1:31 a.m.
    12:47 p.m.              3:00 p.m.
    2:00 p.m.               4:08 p.m.
    3:45 p.m.               5:55 p.m.
    7:00 p.m.               9:20 p.m.
    9:45 p.m.               11:58 p.m.

Scrivete un programma che chieda all'utente di immettere un orario (espresso in ore e minuti utilizzando il formato a 24 ore). 
Il programma deve visualizzare gli orari di partenza e di arrivo del volo il coi orario di partenza il più prossimo a
quello immesso dall'utente:
    Enter a 24-hour time: 13:15
    Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
*/

#include <stdio.h>

#define VOLO1 (8 * 60)
#define VOLO2 (9 * 60) + 43
#define VOLO3 (11 * 60) + 19
#define VOLO4 (12 * 60) + 47
#define VOLO5 ((2 + 12) * 60)
#define VOLO6 ((3 + 12) * 60) + 45
#define VOLO7 ((7 + 12) * 60)
#define VOLO8 ((9 + 12) * 60) + 45

int main(void)
{
    int ora_partenza = 0, min_partenza = 0, min_mezzanotte = 0;
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0;


    printf("Inserisci l'ora di partenza nel formato 24 ore: ");
    scanf("%d:%d", &ora_partenza, &min_partenza);

    min_mezzanotte = ora_partenza * 60 + min_partenza;

    d1 = VOLO1 - min_mezzanotte;
    d2 = VOLO2 - min_mezzanotte;
    d3 = VOLO3 - min_mezzanotte;
    d4 = VOLO4 - min_mezzanotte;
    d5 = VOLO5 - min_mezzanotte;
    d6 = VOLO6 - min_mezzanotte;
    d7 = VOLO7 - min_mezzanotte;
    d8 = VOLO8 - min_mezzanotte;

    if (d1 < 0) d1 *= -1;
    if (d2 < 0) d2 *= -1;
    if (d3 < 0) d3 *= -1;
    if (d4 < 0) d4 *= -1;
    if (d5 < 0) d5 *= -1;
    if (d6 < 0) d6 *= -1;
    if (d7 < 0) d7 *= -1;
    if (d8 < 0) d8 *= -1;

    if (d1 <= d2 && d1 <= d3 && d1 <= d4 && d1 <= d5 && d1 <= d6 && d1 <= d7 && d1 <= d8) {
        printf("Orario partenza 8:00am, ora di arrivo 10:16am\n");
    } else if (d2 <= d1 && d2 <= d3 && d2 <= d4 && d2 <= d5 && d2 <= d6 && d2 <= d7 && d2 <= d8) {
        printf("Orario partenza 9:43am, ora di arrivo 11:52am\n");
    } else if (d3 <= d1 && d3 <= d2 && d3 <= d4 && d3 <= d5 && d3 <= d6 && d3 <= d7 && d3 <= d8) {
        printf("Orario partenza 11:19am, ora di arrivo 1:31pm\n");
    } else if (d4 <= d1 && d4 <= d2 && d4 <= d3 && d4 <= d5 && d4 <= d6 && d4 <= d7 && d4 <= d8) {
        printf("Orario partenza 12:47pm, ora di arrivo 3:00pm\n");
    } else if (d5 <= d1 && d5 <= d2 && d5 <= d3 && d5 <= d4 && d5 <= d6 && d5 <= d7 && d5 <= d8) {
        printf("Orario partenza 2:00pm, ora di arrivo 4:08pm\n");
    } else if (d6 <= d1 && d6 <= d2 && d6 <= d3 && d6 <= d4 && d6 <= d5 && d6 <= d7 && d6 <= d8) {
        printf("Orario partenza 3:45pm, ora di arrivo 5:55pm\n");
    } else if (d7 <= d1 && d7 <= d2 && d7 <= d3 && d7 <= d4 && d7 <= d5 && d7 <= d6 && d7 <= d8) {
        printf("Orario partenza 7:00pm, ora di arrivo 9:20pm\n");
    } else if (d8 <= d1 && d8 <= d2 && d8 <= d3 && d8 <= d4 && d8 <= d5 && d8 <= d6 && d8 <= d7) {
        printf("Orario partenza 9:45pm, ora di arrivo 11:58pm\n");
    }

    return 0;
}