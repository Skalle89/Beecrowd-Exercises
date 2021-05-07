#include <stdio.h>

int flavius(int n, int k){
    if (n ==1) return 1;
    return (k-1 + flavius(n-1,k))%n +1;
}

int main() {
    int c,i;
    scanf("%d",&c);
    for(i = 0; i < c; i++){
        int n,k;
        scanf("%d %d",&n,&k);
        int resp = flavius(n,k);
        printf("Case %d: %d\n",i+1,resp);

    }
    return 0;
}


