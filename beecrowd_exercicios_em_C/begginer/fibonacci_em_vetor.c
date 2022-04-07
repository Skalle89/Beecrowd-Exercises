#include <stdio.h>

int main(){
    long long int fib [61];
    int i,j,n,m;
    fib[0] = 0;fib[1] = 1;
    for(i = 2; i < 61;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    scanf("%d",&n);

    for (j = 0; j < n;j++){
        scanf("%d",&m);
        printf("Fib(%d) = %lld\n",m,fib[m]);
    }

    return 0;
}