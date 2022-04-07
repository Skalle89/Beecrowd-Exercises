#include <stdio.h>

int checar_repeticao(int n){
    int val = n/10;
    while (n > 0){
        while (val > 0){
            if(val%10 == n%10) return 1;
            val /= 10;
        }
        n /= 10;
        val = n/10;

    }
    return 0;
}


int main(){
    int m,n,i,total=0;
    while(scanf("%d %d",&m,&n) != EOF) {

        for (i = m; i < n + 1; i++) {
            if (!checar_repeticao(i)) {
                total++;
            }
        }
        printf("%d\n", total);
        total = 0;
    }
    return 0;
}