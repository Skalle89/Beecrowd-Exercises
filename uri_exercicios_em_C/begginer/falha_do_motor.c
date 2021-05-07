#include <stdio.h>

void ler_medidas(int *n,int vtr[]){
    int i;
    for(i = 0;i < *n;i++){
        scanf("%d",vtr + i);
    }
}

void ocorre_falha(int * n,int * q, int vtr[]){
    int i;
    for(i = 0;i < *n-1;i++){
        if(vtr[i] > vtr[i+1]) {
            *q = i+2;
            break;
        }
    }
}

int main(){
    int o,q=0;
    scanf("%d",&o);
    int *n=&o,vtr[o];
    ler_medidas(n,vtr);
    ocorre_falha(n,&q,vtr);
    printf("%d\n",q);
    return 0;
}