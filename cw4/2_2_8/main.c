#include <stdio.h>
#include <stdlib.h>
int sq(int n){
    int i = 0;
    while(i * i <= n)
        i++;
    return i-1;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("Hello world!\n");
    return 0;
}
