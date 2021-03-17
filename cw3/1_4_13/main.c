#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj liczbe\n");
    int n, sum = 1, s = 1;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        s *= i;
        sum += s;
    }
    printf("%d", sum);
    return 0;
}
