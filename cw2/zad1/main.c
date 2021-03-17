#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int pierwsza;
    int druga;
    int trzecia;
    scanf("%d", &pierwsza);
    scanf("%d", &druga);
    scanf("%d", &trzecia);
    int wynik = pow(pierwsza*druga*trzecia,1.0/3.0);
    printf("%.4f", wynik);
    return 0;
}
