#include <stdio.h>

void seq_seq(int n, int caso){
    int i,j,total=((1+n)*n)/2+1;
    if (n == 0) printf("Caso %d: %d numero\n",caso,total);
    else printf("Caso %d: %d numeros\n",caso,total);
    printf("%d",0);
    for (i = 0; i < n+1;i++){
        for(j = 0;j < i;j++){
            printf(" %d",i);
        }
    }
    printf("\n\n");
}

int main(){
    int n,caso = 1;
    while(scanf("%d",&n)!= EOF) {
        seq_seq(n,caso);
        caso ++;
    }
    return 0;
}

//int fat_sum(n){
//    if (n == 0) return 1;
//    return n + fat_sum(n-1);
//}