#include <stdio.h>
#include <stdlib.h>
int pot(int n, int m){
    int s = 1;
    for(int i = 1; i <= m; i++){
        s = n * s;
    }
    return s;
}
int sq(int n, int m){
    int i = 0;
    while(pot(i,m) <= n){
        i++;
    }
    return i-1;
}

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    printf("Pod³oga pierwiastka %d stopnia z liczby %d wynosi: %d \n", m, n, sq(n,m));
    return 0;
}
