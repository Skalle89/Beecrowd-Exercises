#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n != 0){
        int i;
        int vtr[n],maior = 0,suspeito = 0, pos = 0;
        for(i = 0; i < n; i++){
            scanf("%d",&vtr[i]);
        }
        for(i = 0; i < n; i++){
            if (vtr[i] > maior) maior = vtr[i];
        }
        for(i = 0; i < n; i++){
            if (vtr[i] != maior && vtr[i] > suspeito) {
                suspeito = vtr[i];
                pos = i;
            }
        }
        printf("%d\n",pos+1);

        scanf("%d",&n);
    }
    return 0;
}