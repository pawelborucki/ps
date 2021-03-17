#include <stdio.h>
#include <stdlib.h>

int dziel(int n){
    int k;
    for(int i = 2; i < n; i++){
        if (n % i)
            return k;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Najwiekszy dzielnik liczby %d jest: %d\n",n,dziel(n));
    return 0;
}
