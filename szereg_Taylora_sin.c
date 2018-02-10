#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//działa przy kompilcji trzeba dodać -lm
void main()
{
    int n, x1;
    float precyzja, term, mianownik, x, sinx, sinval;

    printf("Wpisz wartosc x w stopniach\n");
    scanf("%f", &x);
    x1 = x;
    /* Zamiana stopni na radiany */
    x = x * (3.142 / 180.0);
    sinval = sin(x);
    printf("Podaj parametr długości rozwiniec szeregu Taylora\n");
    scanf("%f", &precyzja);
    term = x;
    sinx = term;
    n = 1;
    do
    {
        mianownik = 2 * n * (2 * n + 1);
        term = -term * x * x / mianownik;
        sinx = sinx + term;
        n = n + 1;
    } while (precyzja <= fabs(sinval - sinx));
    printf("Sinus obliczony z szeregu Taylor = %f \n", sinx);
    printf("Sinus obliczonu przy uzyciu funkcji biblioteki math(%d) = %f\n", x1, sin(x));
}
