#include <stdio.h>

int main(){
    int n,i,v[1000],t = 0;
    scanf("%d",&n);
    for(i = 0; i < 1000; i++){
        if(t > n-1) t = 0;
        v[i] = t;
        t++;
        printf("N[%d] = %d\n",i,v[i]);

    }

    return 0;
}