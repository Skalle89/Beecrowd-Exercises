#include <stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    while (n != 0) {
        int mtz[n][n],f=0,l=n,val = 1;
        while (l > 0){
        for (i = f; i < l; i++) {
            for (j = f; j < l; j++) {
                mtz[i][j] = val;
            }
        }
        val++;
        f ++;
        l --;
    }
        for(i = 0;i < n;i++){
            for(j = 0;j < n; j ++ ){
                if (j == n-1) printf("%3d\n",mtz[i][j]);
                else printf("%3d ",mtz[i][j]);

            }
        }
        printf("\n");
        scanf("%d",&n);
    }
    return 0;
}