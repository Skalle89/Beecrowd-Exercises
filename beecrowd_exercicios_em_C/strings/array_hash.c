#include <stdio.h>

int main(){

    int i,n;
    char hash[101];
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        int j,k,l;

        scanf("%d", &l);

        int rslt = 0;

        for(k = 0; k < l; k ++) {
            scanf("%s", hash);

            for (j = 0; hash[j] != '\0'; j++) {
                rslt += j + k + hash[j] - 'A';
            }
        }
        printf("%d\n", rslt);
    }

    return 0;
}