#include <stdio.h>
#include <stdlib.h>
void rozklad(int n){
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i * i + j * j == n)
                printf("%d * %d + %d * %d = %d\n",i,i,j,j,n);
        }
    }
    for(int k = 1; k <= n; k++){
        for(int m = k; m <= n; m++){
            for(int l = m; l <= n; l++)
                if(k * k + m * m + l * l == n)
                    printf("%d * %d + %d * %d + %d * %d = %d \n",k,k,m,m,l,l,n);
        }
    }
    for(int y = 1; y <= n; y++){
        for(int u = y; u <= n; u++){
            for(int o = u; o <= n; o++){
                for(int h = o; h <= n; h++){
                    if(y * y + u * u + o * o + h * h == n)
                        printf("%d * %d + %d * %d + %d * %d + %d * %d = %d \n",y,y,u,u,o,o,h,h,n);
                }
            }
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
