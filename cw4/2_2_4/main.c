#include <stdio.h>
#include <stdlib.h>
int pot(int n){
    int s=1;
    for(int i = 1; i <= n; i++)
        s = 2 * s;
    return s;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("2 do potegi n: %d\n", pot(n));
    return 0;
}
