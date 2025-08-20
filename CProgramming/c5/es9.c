/*
Scrivete un programma che chieda all'utente di immettere due date e che indichi quale delle due si trova prima nel calendario:

Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08
*/

#include <stdio.h>

int main()
{
    int d1 = 0, d2 = 0, m1 = 0, m2 = 0, y1 = 0, y2 = 0;
    
    printf("Inserisci la prima data (dd/mm/yy): ");
    scanf("%d/%d/%d", &d1, &m1, &y1);

    printf("Inserisci la seconda data (dd/mm/yy): ");
    scanf("%d/%d/%d", &d2, &m2, &y2);

    if ((y1 < y2) || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2)) {
        printf("%.2d/%.2d/%.2d viene prima di %.2d/%.2d/%.2d\n", d1, m1, y1, d2, m2, y2);
    } else {
        printf("%.2d/%.2d/%.2d viene prima di %.2d/%.2d/%.2d\n", d2, m2, y2, d1, m1, y1);
    }

    return 0;
}