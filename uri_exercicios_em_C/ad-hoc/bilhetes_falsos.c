#include <stdio.h>

int main(){
    int a,b,i,j,k;
    scanf("%d %d",&a,&b);
    while(a != 0 && b != 0){
        int vtr[b],total = 0;

        for(i = 0; i < b; i++){
            scanf("%d",&vtr[i]);
        }

        for(i = 0; i < b; i++){
            int ok = 1,rep = 0;

            for(k = 0; k < i; k++){
                if(vtr[k] == vtr[i]) ok = 0;
            }

            if(ok) {
                for (j = i + 1; j < b; j++) {
                        if(vtr[i] == vtr[j]) {
                            rep = 1;
                            printf("%d %d\n",vtr[i],vtr[j]);
                        }
                }

                if (rep) total += 1;
            }

        }
        printf("%d\n",total);
        scanf("%d %d",&a,&b);
    }
    return 0;
}