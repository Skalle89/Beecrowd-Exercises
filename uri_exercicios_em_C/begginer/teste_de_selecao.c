#include <stdio.h>

void selec(int a,int b,int c,int d){
    if (b > c && d > a && c+d > a+b && c > 0 && d > 0 && a%2 == 0)
        puts("Valores aceitos");

    else
        puts("Valores nao aceitos");


}

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    selec(a,b,c,d);
    return 0;
}