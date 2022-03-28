#include <stdio.h>

int checar3(long long int n){
    while (n > 0){
        if(n%10 == 3) return 1;
        n /=10;
    }
    return 0;
}

int main(){

    long long int a=2,b=1,c;
    int i = 1,n;
    while(scanf("%d",&n) != EOF){
        while (i < n + 1) {
             c = a+b;
             if(checar3(c) || c % 3 == 0) i++;
             b = a;
             a = c;
        }
        printf("%lld\n",c);
        i = 1; a = 2,b = 1;
    }
    return 0;
}
