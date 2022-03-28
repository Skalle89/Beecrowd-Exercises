#include <stdio.h>

int main(){
    int n,i,t=0,rslt = 0;
    double c1,c2,a,b;
    scanf("%d",&n);
    for(i = 0; i < n;i++){
        scanf("%lf %lf %lf %lf",&a,&b,&c1,&c2);
        while(a <= b){
            a += (int)(a*c1/100);
            b += (int)(b*c2/100);
            rslt ++;
            if(rslt > 100){
                printf("Mais de 1 seculo.\n");
                t = 1;
                break;
            }
        }
        if (t == 0) printf("%d anos.\n",rslt);
        rslt = 0;
        t = 0;
    }
    return 0;
}