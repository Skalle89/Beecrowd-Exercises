#include <stdio.h>

int main(){
    int v [10],n,i;
    scanf("%d",&n);
    v[0] = n;
    for(i = 1; i < 10;i++){
        v[i] = v[i-1]*2;
    }
    for(i = 0; i < 10;i++){
        printf("N[%d] = %d\n",i,v[i]);
    }
    return 0;
}