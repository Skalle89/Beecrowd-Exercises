#include <stdio.h>
#include <stdlib.h>
int main(){
    int vtr[4],i;
    for(i = 0; i < 4;i++){
        scanf("%d",&vtr[i]);
    }
    while (vtr[0] !=0 && vtr[1] !=0 && vtr[2] !=0 && vtr[3] !=0) {

        int mov[2] = {abs(vtr[2] - vtr[0]), abs(vtr[3] - vtr[1])};
        if (mov[1] == 0 && mov[0] == 0) puts("0");
        else if (abs(mov[1]) == 0 || abs(mov[0]) == 0 || abs(mov[1]) == abs(mov[0])) puts("1");
        else puts("2");

        for(i = 0; i < 4;i++) {
            scanf("%d", &vtr[i]);
        }
    }
    return 0;
}
