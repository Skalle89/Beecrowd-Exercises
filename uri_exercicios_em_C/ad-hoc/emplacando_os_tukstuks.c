#include <stdio.h>
#include <math.h>

int main(){
    int n,i,c,d;
    scanf("%d",&n);
    for (i = 0; i < n; ++i) {
        scanf("%d %d",&c,&d);
        if (c == 0 && d == 0) puts("0");
        else printf("%.0lf\n",pow(26,c)*pow(10,d));
    }
    return 0;
}