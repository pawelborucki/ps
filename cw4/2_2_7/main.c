#include <stdio.h>
#include <stdlib.h>
double pot(int n, int m){
    double s = 1.0;
    if(m >= 0){
           for(int i = 0; i < m; i++){
        s = n * s;
    }
    return s;
    }


    else {
        return 1.0/pot(n,-m);
    }

}
int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    printf("Liczba %d^%d wynosi: %f", n,m,pot(n,m));
    return 0;
}
