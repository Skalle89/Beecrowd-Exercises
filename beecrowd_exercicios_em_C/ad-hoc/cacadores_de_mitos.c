#include <stdio.h>
#include <stdlib.h>

int * alocar_matriz(){
    int i,j,*m = malloc(501*501*sizeof(int));
    for(i = 0; i < 501;i++){
        for(j = 0; j < 501;j++) {
            m[i * 501 + j] = 0;
        }
    }
    return m;
}

int pega_raio(int *  mtz){
    int n,i,r,s;
    scanf("%d",&n);
    for(i = 0; i < n;i++){
        scanf("%d %d",&r,&s);
        if (mtz[r*501+s] == 1) return 1;
        mtz[r*501+s] = 1;

    }
    return 0;
}

int main(){
    int *mtz = alocar_matriz();
    printf("%d\n",pega_raio(mtz));

    return 0;

}