#include <stdio.h>

int main(){
    int  a,b,i ; double c,d =0.0;
    for(i = 0; i < 2;i++){
        scanf("%d %d %lf",&a,&b,&c);
        d += b*c;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", d);
    return 0;
}