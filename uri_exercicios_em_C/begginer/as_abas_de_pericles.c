#include <stdio.h>
#include <string.h>

int main() {

    int n,m,i;

    scanf("%d %d",&n,&m);

    for(i = 0; i < m; i ++){
        char acao [7];
        scanf("%s",&acao);
        if(strcmp(acao,"fechou") == 0) n ++;
        else n --;
    }
    printf("%d\n", n);
    return 0;
}