#include <stdio.h>
int main(){
    int n,i,g,p;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d %d",&g, &p);
        printf("%d\n",g/p + g%p);
    }
    return 0;
}