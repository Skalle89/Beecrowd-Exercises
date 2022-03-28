#include <stdio.h>
#include <math.h>

void ler_vetor(int m, unsigned long long int v[]){
    int j;
    for(j = 0; j < m*m; j++) {
        scanf("%lld", &v[j]);
    }
}

void criar_matriz_quadrada(int m, unsigned long long int v[], unsigned long long int x[][m]){
    int i,j,z = 0;
    for(i = 0; i < m;i++){
        for(j = 0; j < m;j++){
           x[i][j] = v[j+z]*v[j+z];
        }
        z += m;
    }
}

int achar_o_maior(int o,int p,unsigned long long int mtz[][o]){
    int j, o_maior;

    if(mtz[0][p] == 0)  o_maior = 1;
    else o_maior = (int)(log10l(mtz[0][p]))+1;

    for(j = 1;j < o;j++){
        if((int)(log10l(mtz[j][p]))+1 > o_maior) o_maior = (int)(log10l(mtz[j][p]))+1;
    }

    if (p==0) return o_maior;
    return o_maior+1;
}

void escrever_matriz(int o,int c,unsigned long long int mtz[][o]){
    int i,j;
    printf("Quadrado da matriz #%d:\n",c);
    for(i = 0;i< o;i++){
        for(j = 0;j< o;j++){
            int space = achar_o_maior(o,j,mtz);
            if(j == o-1) printf("%*llu\n",space,mtz[i][j]);
            else printf("%*llu",space,mtz[i][j]);
        }
    }

}

int main(){
    int c = 4,n,i;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        int o;
        scanf("%d",&o);

        unsigned long long int mtz[o][o],vtr[o*o];

        ler_vetor(o,vtr);

        criar_matriz_quadrada(o,vtr,mtz);

        escrever_matriz(o,c,mtz);

        c++;
        if(i != n-1) printf("\n");
    }

    return 0;
}

//for(j = 0; j < o*o; j++){
//            scanf("%lld",&l[j]);
//        for(k = 0; k < o ; k++){
//                mtz[j/o][k] = l[j+k-1]*l[j+k-1];
//            }
//        }