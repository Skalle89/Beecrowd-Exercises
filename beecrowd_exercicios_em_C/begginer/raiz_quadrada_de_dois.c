#include <stdio.h>

double raiz_de_dois(int n){

    if (n == 0) return 0.0;

    return 1.0/(2 + raiz_de_dois(n-1));
}


int main(){
    int n;
    double m = 1;
    scanf("%d",&n);
//    m += raiz_de_dois(n);
    printf("%.10lf\n",1+raiz_de_dois(n));

    return 0;
}