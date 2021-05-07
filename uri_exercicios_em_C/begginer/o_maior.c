#include <stdio.h>
#include <stdlib.h>

int o_maior(int x, int y){
    return (x+y+abs(x-y))/2;

}


int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d eh o maior\n",o_maior(a,o_maior(b,c)));
    return 0;

}

