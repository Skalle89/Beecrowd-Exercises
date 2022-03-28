#include <stdio.h>

int main(){

    int n [] = {300,1500,600,1000,150}, val,i, rslt = 225;

    for(i = 0; i < 5; i ++ ){
        scanf("%d",&val);
        rslt += n[i]*val;
    }

    printf("%d\n",rslt);

    return 0;
}