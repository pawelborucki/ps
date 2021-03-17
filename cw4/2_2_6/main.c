#include <stdio.h>
#include <stdlib.h>
int pot(int n, int m){
    int s = 1;
    for(int i = 0; i < m; i++){
        s = n * s;
    }
    return s;
}
int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    printf("Liczba %d^%d wynosi: %d", n,m,pot(n,m));
    return 0;
}
