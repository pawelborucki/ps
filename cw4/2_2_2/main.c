#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    int silnia=1;
    for(int i=n;i>1;i--)
        silnia*=i;

    return silnia;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",silnia(n));
    return 0;
}
