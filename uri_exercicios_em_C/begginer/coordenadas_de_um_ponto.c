#include <stdio.h>

int main(){
    double x,y;
    scanf("%lf %lf",&x,&y);
    if (x == 0.0 || y ==0.0){
        if (y > 0 || y < 0) puts("Eixo Y");
        else if (x > 0 || x < 0) puts("Eixo X");
        else puts("Origem");
    }
    else{
       if (x > 0 && y > 0) puts("Q1");
       else if (x > 0 && y < 0) puts("Q4");
       else if (x < 0 && y > 0 ) puts("Q2");
       else if (x < 0 && y < 0 ) puts("Q3");
    }
    return 0;
}