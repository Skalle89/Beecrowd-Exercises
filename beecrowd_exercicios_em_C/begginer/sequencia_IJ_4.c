#include <stdio.h>

int main(){
    int i;
    for(i = 0; i < 21;i+=2){
        if(i/10.0 != i/10) {
            printf("I=%.1f J=%.1f\n", i / 10.0, i / 10.0 + 1);
            printf("I=%.1f J=%.1f\n", i / 10.0, i / 10.0 + 2);
            printf("I=%.1f J=%.1f\n", i / 10.0, i / 10.0 + 3);
        }else{
            printf("I=%d J=%.d\n", i / 10, i / 10 + 1);
            printf("I=%d J=%d\n", i / 10, i / 10 + 2);
            printf("I=%d J=%d\n", i / 10, i / 10 + 3);
        }
    }
    return 0;
}
