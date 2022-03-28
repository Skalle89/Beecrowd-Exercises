#include <stdio.h>

int main(){
    int i,j,d=1;
    double n,soma = 0,mat [12][12];
    char op;
    scanf(" %c",&op);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12;j++){
            scanf("%lf",&n);
            mat[i][j] = n;
        }
    }
    for(i = 1; i < 12; i++){
        for(j = 0; j < d;j++){
            soma += mat[i][j];
        }
        d += 1;
    }

    if(op == 'M') soma /= 66;

    printf("%.1lf\n",soma);
    return 0;
}