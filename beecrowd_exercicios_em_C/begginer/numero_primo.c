#include <stdio.h>
#include <math.h>

char* eh_primo(int x){
    static int o = 2;
    if (x%o == 0 && x != 2 || x == 1) {
        o = 2;
        return "nao eh primo";
    }
    if (o < (int)(pow(x,0.5))+1) {
        o++;
        return eh_primo(x);
    }
    o = 2;
    return "eh primo";

}

int main(){
    int n,m,i;
    scanf("%d",&m);
    for(i = 0; i < m; i++) {
        scanf("%d", &n);
        printf("%d %s\n", n, eh_primo(n));
    }
    return 0;
}