#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj dwie liczby\n");
    int n,m,i=1;
    scanf("%d%d",&n,&m);
    do{
        n*=i;
        printf("%d\n",n);
        i++;
    }while(n<m);

    return 0;
}
