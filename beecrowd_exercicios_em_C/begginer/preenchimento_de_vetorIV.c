#include <stdio.h>

int main(){
    int par[5]={0,0,0,0,0},impar[5]={0,0,0,0,0},i=0,j=0,k,n;
    for (k = 0; k < 15; k++){
        scanf("%d",&n);
        if(n%2 == 0) {
            par[i] = n;
            i++;
        }
        else {
            impar[j] = n;
            j++;
        }
        if(par[4] != 0){
            for(i = 0; i < 5; i++){
                printf("par[%d] = %d\n",i,par[i]);
                par[i] = 0;
            }
            i = 0;
        }
        else if (impar[4] != 0){
            for(j = 0; j < 5; j++){
                printf("impar[%d] = %d\n",j,impar[j]);
                impar[j] = 0;
            }
            j = 0;
        }
    }
    for(j = 0; j < 5;j++){
        if(impar[j] != 0) printf("impar[%d] = %d\n",j,impar[j]);
    }
    for(i = 0; i < 5;i++){
        if(par[i] != 0) printf("par[%d] = %d\n",i,par[i]);
    }
    return 0;
}