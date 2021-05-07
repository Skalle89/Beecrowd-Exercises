#include <stdio.h>

long long int patinhos(long long int x) {
    if (x == 0)return 0;
    return x-1;
}

int main(){
    long long int n;
    scanf("%llu",&n);
    while(n!=-1){
        printf("%llu\n",patinhos(n));
        scanf("%llu",&n);
    }
    return 0;
}
