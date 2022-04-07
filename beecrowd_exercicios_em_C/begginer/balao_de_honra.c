#include <stdio.h>

int main(){

    char letra;

    scanf(" %c",&letra);

    printf("%d\n",letra - 'A' + 1);
    return 0;
}