#include <stdio.h>

int main(){
    int m,n,i;
    scanf("%d %d",&m, &n);
    char  vtr[m*n][1][2];
    for( i = 0; i < m*n; i++){
        scanf("%s",&vtr[i][0][2]);
    }

    int ok = 1;

    while (ok){
        ok = 0;
        for( i = 0; i < m*n-1; i++){
            if(vtr[i][0][1] < vtr[i+1][0][1]){
                ok = 1;
                 char temp = vtr[i+1][0];
                  vtr[i+1][0] =  vtr[i][0];


            }
            else if (vtr[i][0][1] == vtr[i+1][0][1] && vtr[i][0][0] < vtr[i+1][0][0]){
                ok = 1;

            }
        }

    }
    return 0;
}

//TODO