#include <stdio.h>

int main(){
    int n,i;
    double a,b;
    scanf("%d",&n);
    for (i = 0; i < n; i++){
        scanf("%lf %lf",&a,&b);

        if (b == 0) puts("divisao impossivel");
        else{
            printf("%.1lf\n",a/b);
        }
    }

    return 0;
}