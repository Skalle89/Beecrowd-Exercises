#include <stdio.h>

int main(){
    int pos = 0,i;
    double n,med = 0;
    for (i = 0; i < 6;i++){
        scanf("%lf",&n);
        if (n > 0.0){
            pos ++;
            med += n;
        }
    }
    printf("%d valores positivos\n%.1lf\n",pos,med/pos);
    return 0;
}