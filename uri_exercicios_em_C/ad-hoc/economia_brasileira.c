#include <stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    int vtr[2] = {0,0},resp[n];
    for(i = 0; i < n;i++){
        scanf("%d",resp + i);
        if (resp[i] == 0) vtr[0] +=1;
        else vtr[1] +=1;
    }
    if(vtr[1] >= vtr [0]) puts("N");
    else puts("Y");
    return 0;
}