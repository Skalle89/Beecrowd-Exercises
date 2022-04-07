#include <stdio.h>

int main(){
    int n,i,a=1,b=0,c;
    scanf("%d",&n);
    if(n >= 1) printf("%d",0);
    if(n >= 2) printf(" %d",a);
    for (i = 3; i < n+1; i ++){
        c = a+b;
        printf(" %d",c);
        b = a;
        a = c;
    }
    puts("");
    return 0;
}