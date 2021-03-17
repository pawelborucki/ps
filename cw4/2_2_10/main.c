#include <stdio.h>
#include <stdlib.h>
int euk(int a, int b){
    int n,m;
    n = a;
    m = b;
    while(n*m!=0){
        if(n>m){
            n=n%m;

        }
        else{
            m=m%n;
        }
    }
    if(n==0){
        return m;
    }
    else
        return n;
}
int sumWzPier(int n){
    int i, S=0;
    for(i=2;i<n;i++){
        if(euk(n,i)==1){
            S=S+i;
        }
    }
    return S;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("Suma liczb wzglêdnie pierwszych z %d wynosi %d\n",n,sumWzPier(n));
    return 0;
}
