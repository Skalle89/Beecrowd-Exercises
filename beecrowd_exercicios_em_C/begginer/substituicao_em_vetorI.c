#include <stdio.h>

int main(){
    int vet[10],i,n;
    for (i = 0; i < 10;i++){
        scanf("%d",&n);
        vet[i] = n;
        if (n < 1) vet[i] = 1;
    }
    for (i = 0; i < 10;i++){
        printf("X[%d] = %d\n",i,vet[i]);
    }
    return 0;
}