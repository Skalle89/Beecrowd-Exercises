#include <stdio.h>

int main(){
    int h;
    while (scanf("%d", &h) != EOF){
        if(h % 6 == 0){
            puts("Y");
        }
        else{
            puts("N");
        }
    }
    return 0;
}