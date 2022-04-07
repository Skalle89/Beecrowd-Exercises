#include <stdio.h>

void escrever_mattriz(double mat[][12]){
    int i,j;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12;j++){
            scanf("%lf",&mat[i][j]);
        }
    }

}

double area_direita(double mat[][12]){
    int i,j,d=11;
    double soma=0;

    for(i = 1; i < 6; i++){
        for(j = d; j < 12;j++){
            soma += mat[i][j];
            soma += mat[11-i][j];
        }
        d --;
    }

    return soma;
}

void resultado(char op,double soma){
    if(op == 'M') soma /= 30;
    printf("%.1lf\n",soma);

}


int main(){
    double mat [12][12];
    char op;
    scanf(" %c",&op);

    escrever_mattriz(mat);
    double soma = area_direita(mat);
    resultado(op,soma);

    return 0;
}