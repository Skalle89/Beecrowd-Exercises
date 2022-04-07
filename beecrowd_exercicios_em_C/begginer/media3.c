#include <stdio.h>

int main(){
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double med = (a*2 + b*3 + c*4 + d*1)/10;

    printf("Media: %.1lf\n",med);

    if (med > 6.9){
        printf("Aluno aprovado.\n");
    }
    else if ( med < 5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        a = 0;scanf("%lf",&a);
        med = (med + a)/2.0;
        printf("Nota do exame: %.1lf\n",a);
        if (med > 4.9) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",med);
    }

    return 0;

}