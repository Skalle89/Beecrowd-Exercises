#include<stdio.h>

int main(){
    int vtr[4],i;
    for(i = 0; i < 4;i++){
            scanf("%d",&vtr[i]);
        }
    while(vtr[0] != 0 || vtr[1] != 0 || vtr[2] != 0 || vtr[3] != 0){
        int rslt = (vtr[2]-vtr[0])*60 + vtr[3] - vtr[1];
        if (rslt < 0) rslt += 1440;
        printf("%d\n",rslt);

        for(i = 0; i < 4;i++){
            scanf("%d",&vtr[i]);
        }

    }

    return 0;
}