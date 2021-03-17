#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj dwie liczby\n");
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        n*=i;
        printf("%d\n",n);
    }
    return 0;
}
