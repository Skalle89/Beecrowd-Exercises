#include <stdio.h>
#include <stdlib.h>

void verificacao(int * mtz){
    int  j;

    for(j = 0; j < 5; j++) {
        if(mtz[j] == mtz[5+j]){
            puts("N");
            return;
        }
    }

    puts("Y");

}


int main(){
    int * mtz = malloc(2*5*sizeof(int)),i,j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 5; j++) {
            scanf("%d", &mtz[i*5 + j]);
        }
    }
    verificacao(mtz);
    free(mtz);
    return 0;
}