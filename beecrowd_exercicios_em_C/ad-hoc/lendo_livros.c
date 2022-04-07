#include <stdio.h>

int main(){
    double q,d,p;
    scanf("%lf",&q);
    while (q != 0){
        scanf("%lf",&d);
        scanf("%lf",&p);
        int rslt = (int)(q*((p*d)/(p-q)));
        if (rslt > 1)printf("%d paginas\n",rslt);
        else printf("%d pagina\n",rslt);
        scanf("%lf",&q);
    }
    return 0;
}