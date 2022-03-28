#include <stdio.h>

int main(){
    char a [100] ; double b,c;
    scanf("%s %lf %lf",&a,&b,&c);
    printf("TOTAL = R$ %.2lf\n", b+0.15*c);
    return 0;
}