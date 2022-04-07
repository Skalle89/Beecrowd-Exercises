#include <stdio.h>

void checar_repeticao(int n,int m, int *t){
    if (n == 0) {
        *t += 1;
        return;
    }
    if(n%10 == m%10) return;

    if (m/10 == 0) return checar_repeticao(n/10,n/100,t);

    return checar_repeticao(n,m/10,t);
}


int main(){
    int m,n,i,total=0;
    while(scanf("%d %d",&m,&n) != EOF) {

        for (i = m; i < n + 1; i++) {
            checar_repeticao(i,i/10,&total);
        }
        printf("%d\n", total);
        total = 0;
    }
    return 0;
}