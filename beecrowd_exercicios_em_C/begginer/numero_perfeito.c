#include <stdio.h>

int main(){
    int n,x,i;
    scanf("%d",&n);
    for (i = 0; i < n;i++){
        scanf("%d",&x);
        int soma = 1,j;
        for (j = 2;j < x;j++){
           if(x%j == 0) soma +=j;
        }
        if(x == soma && soma != 1) printf("%d eh perfeito\n",x);
        else printf("%d nao eh perfeito\n",x);

    }
    return 0;
}