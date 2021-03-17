#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,a,b;
    printf("Podaj dwie liczby\n");
    scanf("%d%d", &n, &m);
    a=n;
    b=m;
for(i=2;i<=n;i++)
    a=n;
    b=i;
    while(a*b!=0){
        if(a>b)
            a=a%b;
        else
            b=b%a;

    }
    if(a==1 || b==1)
        s=s+1;

    if(a==0)
        printf("%d",b);
    else
        printf("%d",a);
    return 0;
}
