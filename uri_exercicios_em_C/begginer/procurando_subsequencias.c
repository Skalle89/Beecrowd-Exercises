#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    long long int n,m,o,p,i,j,q=0,pos=0,c=1;
    while (scanf("%lld",&n) != EOF){
        scanf("%lld",&o);
        m = (long long int) (log10l((long double)n)) + 1;
        p = (long long int) (log10l((long double)o)) + 1;
        long long int v[m],v2[p];

        for(i = m-1; i > -1;i--){
            v[i] = n%10;
            n /= 10;
        }
        for(i = p-1; i > -1;i--){
            v2[i] = o%10;
            o /= 10;
        }

        for (i = 0; i < p; i+=p-m+1){
            int chck = 1;
            for(j = i; j < i+m;j++){
                printf("%lld %lld\n",v[j-i], v2[j]);
                if(v[j-i] != v2[j]){
                    chck = 0;
                }
            }
            if (chck) {
                pos = i+1;
                q ++;
            }
        }


        printf("Caso #%lld:\n",c);
        if(q == 0){
            printf("Nao existe subsequencia\n");
        }
        else{
            printf("Qtd.Subsequencias: %lld\nPos: %lld\n",q,pos);
        }
    }
    return 0;
}