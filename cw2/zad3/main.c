#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    float d = b*b-4*a*c;
    if(d<0)
        printf("Nie ma pierwiastkow rzeczywistych");
    else if(d=0){
        int x= -b/2*a;
        printf("Posiada jeden pierwiastek: %.2f", x);
    }
    else {
        int x1= (-b+sqrt(d))/2*a;
        int x2= (-b-sqrt(d))/2*a;
        printf("Posiada dwa pierwiastki: %.2f%.2f", x1, x2);
    }
    return 0;
}
