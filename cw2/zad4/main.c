#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Podaj dwie liczby");
    scanf("%d%d", &a,&b);
    printf("1.Dodawanie 2.Odejmowanie 3. Mnozenie 4. Dzielenie");
    scanf("%d",&c);
    switch(c){
    case 1 :
        printf("%d",a+b);
        break;
    case 2 :
        printf("%d",a-b);
        break;
    case 3 :
        printf("%d",a*b);
        break;
    case 4 :
        printf("%.2f", a/b);
        break;
    }
    return 0;
}
