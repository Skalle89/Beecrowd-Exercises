#include <stdio.h>
#include <math.h>

int main(){
    int c,i;
    double n,m;
    scanf("%d",&c);
    for (i = 0; i < c;i++){
        scanf("%lf %lf",&n,&m);
        printf("%d\n",(int)(m*log10(n)+1));
    }
    return 0;
}