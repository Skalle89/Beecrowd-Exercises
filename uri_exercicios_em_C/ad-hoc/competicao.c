#include <stdio.h>
#include <stdlib.h>

int checar_coluna(int p, int n, int *mtz){
    int val =0 ;
    for(int i = 0; i < n; i++){
        val  += mtz[n*i + p];
    }
}

int * alocar_matriz(int n, int p){
    int * m = (int *)malloc(n*p*sizeof(int));
    return m;
}

void resultado(int *mtz){
    int (* checar[1]) (int p, int n, int * mtz) = {checar_coluna};
}

void liberar_matriz(int *mtz){
    return free(mtz);
}


int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    while (n != 0 && p !=0){
        int * mtz = alocar_matriz(n,p);
        resultado(mtz);
        liberar_matriz(mtz);
        scanf("%d %d",&n,&p);
    }
    return 0;
}

//TODO