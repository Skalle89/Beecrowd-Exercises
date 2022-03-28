#include <stdio.h>

int main(){
    double soma = 1,a= 3,b=2;
    int i;
    for(i = 2; i < 19;i++){
        soma += a/b;
        a +=2;
        b *=2;
    }
    printf("%.2lf\n",soma);
    return 0;

}