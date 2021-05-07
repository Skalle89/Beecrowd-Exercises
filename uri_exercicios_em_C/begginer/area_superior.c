#include <stdio.h>
#include <stdlib.h>


void ler_matriz(double * mtz){
    int i,j;
    for(i =0; i < 12; i++){
        for (j =0 ; j < 12;j++){
            scanf("%lf",&mtz[12*i+j]);
        }
    }
}

void somar(double * mtz, double *s){
    int i,j,d=1;
    for(i = 0; i < 5; i++){
        for (j = d ; j < 12-d;j++){
            * s += mtz[12*i+j];
        }
        d ++;
    }
}

int escolha (char * c){
    if(* c == 'M') return 1;
    return 0;
}

int main(){
    char op;
    scanf(" %c",&op);
    double soma = 0, *mtz = (double*) malloc(12*12*sizeof(double));
    ler_matriz(mtz);
    somar(mtz,&soma);
    if (escolha(&op)) soma /=30;
    printf("%.1lf\n",soma);

    return 0;
}
