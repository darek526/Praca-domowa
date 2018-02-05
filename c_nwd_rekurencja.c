
#include <stdio.h>
// NWD największy wspolny dzielnik 2 liczb,  metoda z odejmowaniem
int rek(int x,int y)
{
    if(x==y);
    else if(x>y) return rek(x-y,y);
    else return rek(x,y-x);
}

int main()
{
    int a, b ;

    printf("Podaj liczbe calkowita a>0\n");
    scanf("%d", &a);
    printf("Podaj liczbe calkowita b>0\n");
    scanf("%d", &b);
    printf("Najwiekszy Wspolny dzielnik liczb:%d i %d = ", a, b, rek(a,b));

    while ( b != a)
        if ( b > a)
            b = b - a;
        else
            a = a - b;
    printf("%d\n", a);
    return 0;
}
