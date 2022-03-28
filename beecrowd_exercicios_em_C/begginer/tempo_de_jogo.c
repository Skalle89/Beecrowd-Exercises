#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int rslt = b-a;
    if(rslt <= 0) rslt += 24;
    printf("O JOGO DUROU %d HORA(S)\n",rslt);
    return 0;
}