#include <stdio.h>

int main(){
    int n, i,j,val,p;
    scanf("%d",&n);
    for (i = 0; i < n;i++){
        int soma = 0;
        scanf("%d %d",&val,&p);
        if(val %2 == 0) val += 1;
        for(j = val; j < 2*p+val;j+=2){
            soma +=j;
        }
        printf("%d\n",soma);
    }
    return 0;
}