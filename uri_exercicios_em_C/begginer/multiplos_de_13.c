#include <stdio.h>

int main(){
    int x,y,i,soma = 0;
    scanf("%d\n%d",&x,&y);
    if(x > y){
        int z = x;
        x = y;
        y = z;
    }
    for(i = x; i < y + 1; i++){
        if (i%13 != 0){
            soma += i;
        }
    }

    printf("%d\n",soma);
    return 0;
}