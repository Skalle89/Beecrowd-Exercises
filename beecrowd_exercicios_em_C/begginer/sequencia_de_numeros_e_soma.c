#include <stdio.h>

int main(){
    int a,b,i,sum = 0;
    scanf("%d %d",&a,&b);
    while(a > 0 && b > 0) {
        if (a > b) {
            int c = a;
            a = b;
            b = c;
        }
        for (i = a; i < b + 1; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
        sum = 0;
        scanf("%d %d",&a,&b);
    }
    return 0;
}