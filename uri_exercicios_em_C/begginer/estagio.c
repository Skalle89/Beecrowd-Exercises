#include <stdio.h>

int main(){
    int m,i,n,c;
    while(scanf("%d",&m)!=EOF) {
        int p1 = 0, p2 = 0;
        for (i = 0; i < m; i++) {
            scanf("%d %d", &n, &c);
            p1 += n * c;
            p2 += c;
        }
        printf("%.4lf\n", p1 / (p2 * 100.0));
    }
    return 0;
}