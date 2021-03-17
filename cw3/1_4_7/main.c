#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,s=1;
    printf("Podaj dwie liczby\n");
    scanf("%d%d", &n,&m);
    for(int i=n; i<=m; i++)
        s=s*i;
    printf("Wynik wynosi %d", s);
    return 0;
}
