#include <stdio.h>

int main(){
    int x,y,z,i,j,k,sum = 0;
    scanf("%d",&k);
    for(j = 0; j < k ; j++) {
        scanf("%d %d", &x, &y);
        if (x > y) {
            z = x;
            x = y;
            y = z;
        }
        for (i = x + 1; i < y; i++) {
            if (i % 2 != 0) sum += i;

        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}