#include <stdio.h>

int main() {
    int p,r;
    scanf("%d %d", &p, &r);
    if(p == 0) puts("C");
    else{
        if(r == 1) puts("A");
        else puts("B");
    }

    return 0;
}