#include<stdio.h>
//Wczytuje n, i wypisuje sume podloga pierwiastka stopmnia m  z 0 + podloga pierwiastka
// stopnai mz 1 + podloga pierwiastka stopnia m z 2 + ...
//podloga pierwiastka stopnia m z n. Algorytm podzielic na kilka funkcji.

//
//int podlogapierwiastka(unsigned int n){
//int i=0;
//while (i*i<=n)
//{
//    i++;
//}
//return i-1;
//}

int podlogapierwiastkamtegostopnia(unsigned int m, unsigned int n){
int i=0;
while (idopotegim(i,m)<=n)
{
    i++;
}
return i-1;
}
int idopotegim(int i, int m){
    int k,w=1;
for(k=1;k<=m;k++)
{
    w=w*i;
}
return w;
}

int sumapodlog(int n){
int i,S=0;
for(i=0;i<=n;i++)
{
    S=S+podlogapierwiastkamtegostopnia(i,n);
}
return S;
}

int main(){
int n;
printf("Podaj liczbe calkowita n");
scanf("%d",&n);
printf("Wartosc wynosi %d\n",sumapodlog(n));
return 0;
}


