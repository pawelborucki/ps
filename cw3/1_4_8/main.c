#include <stdio.h>
#include <math.h>
int main()
{
int n;
printf("Podaj n:");
scanf("%d",&n);
int fib[n-1];
fib[0]=1;
fib[1]=1;
for(int i=2; i<n; i++)
fib[i]=fib[i-2]+fib[i-1];
printf("%d",fib[n-1]);
return 0;
}
