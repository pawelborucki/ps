#include <stdio.h>
#include <stdlib.h>
void rozklad(unsigned int n){
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i * i + j * j == n)
                printf("%d*%d+%d*%d=%d\n",i,i,j,j,n);
        }
    }
}
int main()
{
    int n;
    printf("Podaj liczbe\n");
    scanf("%d", &n);
    rozklad(n);
    return 0;
}
