#include <stdio.h>

int main(){
    int v,n,i;
    scanf("%d %d",&v,&n);
    int vtr[n];
    for(i = 0; i < n;i++){
        scanf("%d",&vtr[i]);
        if(v + vtr[i] > 100) v = 100;
        else if(v + vtr[i] < 0) v = 0;
        else v += vtr[i];
    }
    printf("%d\n",v);
    return 0;
}