#include <stdio.h>

int main(){
    int a [20],i,c;
    for ( i = 0; i < 20;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0; i < 10; i++){
        c = a[i];
        a[i] = a[20-i-1];
        a[20-i-1] = c;
    }
    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}