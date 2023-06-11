#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int i,quant=0,n,A[1000];

    scanf("%d",&A[0]);
    while(A[0]!=-1){
        for(i=1;i<1000;i++)
          scanf("%d",&A[i]);
        scanf("%d",&n);
        for(i=0;i<1000;i++)
          if(n==A[i])
            quant+=1;
        printf("%d appeared %d times\n",n,quant);
        quant=0;
        scanf("%d",&A[0]);
    }
  return 0;
}