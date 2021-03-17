#include <stdio.h>
#include <stdlib.h>
int pierwsza( int g )
{
    for( int i = 2; i < g; i++ )
    {
        if( g % i == 0 )
        {
           return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    int wyn=0;
    scanf("%d",&n);
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<100;i++)
    {
        if(pierwsza(i)==1)
        {
           wyn++;
           if(wyn==n)
           {
               printf("%d",i);
           }
        }
    }
}
