#include <stdio.h>

int main(){
    int n,i;
    int vtr[4] = {1,7,9,3};
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        int sete;
        scanf("%d",&sete);
        printf("%d\n",vtr[sete%4]);
    }
    return 0;
}