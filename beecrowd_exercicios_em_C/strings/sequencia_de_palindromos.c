#include <stdio.h>

unsigned long long checar_palindromo (char a[], unsigned long long p){

    unsigned long i;
    for(i = 0; i < p;i++){
        if(a[i] != a[p-i-1]){
            return 0;
        }
    }

    return p;

}


int main(){

    unsigned long long n,d;

    scanf("%llu %llu",&n,&d);
    char letras [100001];

    while (n != 0 && d != 0){
        unsigned long long p = 1,k = 0;
        scanf("%s",letras);


        while (d >= p){
            char elem [p];
            unsigned long long i,o_maior = 0;

            for(i = 0; i < n; i+=d){
                unsigned long long z,u = 0;

                for(z = i; z < i + p; z++){
                    elem[u++] = letras[z];

                }

                o_maior += checar_palindromo(elem,p);

            }

            if(o_maior > k) k = o_maior;


            p++;
        }

        printf("%llu\n",k);
        scanf("%llu %llu",&n,&d);

    }
    return 0;
}