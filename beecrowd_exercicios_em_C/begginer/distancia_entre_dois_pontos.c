#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,d,rslt;
    scanf("%lf %lf",&a,&b);
    scanf("%lf %lf",&c,&d);
    rslt = pow((a-c)*(a-c)+(b-d)*(b-d),0.5);
    printf("%.4lf\n",rslt);
    return 0;

}