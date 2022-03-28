#include <stdio.h>

int main(){
    double n;
    int pos = 0;
    for(int i = 0; i < 6; i ++){
        scanf("%lf",&n);
        if (n > 0.0){
            pos ++;

        }
    }
    printf("%d valores positivos\n",pos);
    return 0;
}
