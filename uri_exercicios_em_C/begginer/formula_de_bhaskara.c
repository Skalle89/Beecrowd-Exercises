#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double delta = b*b - 4*a*c;

    if (a == 0 || delta < 0) puts("Impossivel calcular");
    else{
        double root1 = (b*-1 + pow(delta,0.5))/(2*a);
        double root2 = (b*-1 - pow(delta,0.5))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n",root1,root2);
    }
    return 0;
}