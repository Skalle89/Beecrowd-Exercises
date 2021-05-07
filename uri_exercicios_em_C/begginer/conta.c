#include <stdio.h>

int main(){

    int n,val,i;
    scanf("%d",&n);

    for(i = 0; i < n; i ++){

        scanf("%d",&val);

        if(val%2 == 0) printf("0\n");
        else printf("1\n");
    }

    return 0;
}