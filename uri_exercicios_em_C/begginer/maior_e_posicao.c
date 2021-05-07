#include <stdio.h>

int main(){
    int pos = 1,n,i;
    scanf("%d",&n);
    int maior = n;
    for(i = 2; i < 101;i++){
        scanf("%d",&n);
        if(n > maior) {
            pos = i;
            maior = n;
        }
    }
    printf("%d\n%d\n",maior,pos);
    return 0;
}