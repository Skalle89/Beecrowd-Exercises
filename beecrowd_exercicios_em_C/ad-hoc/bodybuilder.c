#include <stdio.h>

double rm(double w, double r){
    return w*(1+r/30);
}

void avaliar( double m){
    if (1 <= m && m < 13) puts("Nao vai da nao");
    else if (13 <= m && m < 14) puts("E 13");
    else if (14 <= m && m < 40) puts("Bora, hora do show! BIIR!");
    else if (40 <= m && m < 61) puts("Ta saindo da jaula o monstro!");
    else puts("AQUI E BODYBUILDER!!");
}

int main(){
    int cnt = 0;
    double w1,w2,r,monstro = 0;
    scanf("%lf %lf %lf",&w1,&w2,&r);
    while (w1 != 0 && w2 != 0 && r!=0){
        double m = (rm(w1,r)+rm(w2,r))/2;
        avaliar(m);
        monstro += m;
        cnt ++;
        scanf("%lf %lf %lf",&w1,&w2,&r);
    }
    if(monstro/cnt > 40)puts("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!");
    return 0;
}