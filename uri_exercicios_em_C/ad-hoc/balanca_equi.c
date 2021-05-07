#include <stdio.h>

int main() {

    int i, equi = 0; double val;

    for(i = 0; i < 4; i ++){
        scanf("%lf",&val);
        equi += (int)(val*10);
    }

    if(equi%2 == 0) printf("YES\n");
    else printf("NO\n");


    return 0;
}

//TODO