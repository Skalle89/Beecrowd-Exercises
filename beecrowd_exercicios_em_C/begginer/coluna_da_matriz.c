#include <stdio.h>


int main(){
    double mtz [12][12],n,rslt=0;
    int c,i,j; char op;
    scanf("%d",&c);
    scanf(" %c",&op);
    for(i = 0; i < 12; i++){
        for( j = 0; j < 12; j ++){
            scanf("%lf",&n);
            mtz[i][j] = n;
            if(i == c) rslt += mtz[i][c];
        }
    }

    if (op == 'M') rslt /= 12;
    printf("%.1lf\n",rslt);

    return 0;
}