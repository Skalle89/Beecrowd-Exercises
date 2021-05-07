#include <stdio.h>

int main(){
    int x,y,z,i,sum = 0;
    scanf("%d %d",&x,&y);
    if(x > y){
        z = x;
        x = y;
        y = z;
    }
    for(i = x+1; i < y; i++){
        if(i%2 != 0) sum += i;

    }
    printf("%d\n",sum);
    return 0;
}