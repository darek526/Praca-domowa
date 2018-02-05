#include <stdio.h>
int Fibon(int wyraz)
{   if(wyraz==0) return 0;
    if (wyraz<3) return 1;
    else
        return Fibon(wyraz-2)+Fibon(wyraz-1);//funkcja przechodzi sama do siebie

}
int main() {
    int wyraz;
    printf("Podaj ktory wyraz ciagu Fibonacjego chcesz obliczyc\n");
    scanf("%i", &wyraz);//pobranie liczby z klawiatury
    printf("%i wyraz ciagu Fibonaciego wynosi %i\n", wyraz, Fibon(wyraz));//wyswietla wynik
    return 0;
}
