#include <stdio.h>

int main(){
    double soma = 1;
    int i;
    for (i = 2; i < 101; i++ ){
        soma += 1.0/i;
    }
    printf("%.2lf\n",soma);
    return 0;

}