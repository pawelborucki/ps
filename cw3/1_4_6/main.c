#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Podaj liczbe\n");
    int liczba,s=1;
    scanf("%d",&liczba);
    for(int i=2; i<=liczba; i++)
        if(i%2==0)
            s=s*i;
    printf("Wynik wynosi: %d", s);
    return 0;
}
