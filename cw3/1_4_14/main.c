#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
scanf("%d", &n);

 for(int i = 1; i < n; i++) {
for(int j = i; j < n; j++) {
for(int k = j; k < n; k++) {
if(i*i + j*j == k*k) {
printf("a:%d b:%d c:%d\n", i, j, k);
}
}
}
}
return 0;
}
