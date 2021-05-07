#include <stdio.h>

int main(){
    int n,i,j;
    while(scanf("%d",&n)!= EOF){
        int mtz[61][2],num,pares = 0;
        for(i = 30; i < 61; i++){
            for(j = 0; j < 2; j++){
                mtz[i][j] = 0;
            }

        }
        char pe;
        for(i = 0; i < n; i++){
            scanf("%d %c",&num,&pe);
            if(pe == 'D') mtz[num][0] +=1;
            else mtz[num][1] += 1;
        }

        for(i = 30; i < 61; i++){
            if(mtz[i][0] >= mtz[i][1]) pares += mtz[i][1];
            else pares += mtz[i][0];
        }
        printf("%d\n",pares);

    }
    return 0;
}