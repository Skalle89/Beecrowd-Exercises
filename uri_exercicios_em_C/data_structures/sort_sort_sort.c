#include <stdio.h>


int checar_par(int n1 ,int n2){
    if (n1 %2 == 0 && n2 %2 == 0) return 1;

    if(n1 %2 != 0 && n2%2 != 0) return 2;

    if(n1 % 2 == 0 && n2 % 2 != 0 || n1 % 2 != 0 && n2 % 2 == 0) return 3;

    return 0;
}

void par(int v1, int v2,int *vtr, int * k, int *inicio, int *fim){
    if (v1 < v2 ){
        vtr[*k] = v1;
        *inicio +=1;
        *k+=1;
    }
    else{
        vtr[*k] = v2;
        *fim +=1;
        *k+=1;
    }

}

void impar(int v1, int v2,int *vtr, int * k, int *inicio, int *fim){

    if (v1 < v2){
        vtr[*k] = v2;
        *fim +=1;
        *k+=1;
    }
    else{
        vtr[*k] = v1;
        *inicio +=1;
        *k+=1;
    }

}

void par_impar(int v1, int v2,int *vtr, int * k, int *inicio, int *fim){

    if (v1 %2 != 0){
        vtr[*k] = v1;
        *inicio +=1;
        *k+=1;
    }
    else{
        vtr[*k] = v2;
        *fim +=1;
        *k+=1;
    }

}


void intercala(int v1, int v2,int mod,int *vtr, int * k, int *inicio, int *fim){
    if (v1 % mod < v2 % mod){
        vtr[*k] = v1;
        *inicio +=1;
        *k +=1;
    }
    else{
      vtr[*k] = v2;
      *fim +=1;
      *k +=1;
    }
}


void merge(int *vtr,int i, int meio, int f, int mod){
    int inicio = i, fim = meio+1, vtr_aux[f-i], k = 0;

    while (inicio <= meio && fim <= f){

        if(vtr[inicio]%mod == vtr[fim]%mod) {
            switch (checar_par(vtr[inicio],vtr[fim])) {
                case 1: par(vtr[inicio], vtr[fim], vtr_aux, &k, &inicio, &fim);
                break;
                case 2: impar(vtr[inicio], vtr[fim], vtr_aux, &k, &inicio, &fim);
                break;
                case 3: par_impar(vtr[inicio], vtr[fim], vtr_aux, &k, &inicio, &fim);
                break;
            }

        }
        else{
            intercala(vtr[inicio], vtr[fim], mod, vtr_aux, &k, &inicio, &fim);
        }

    }

    while (inicio <= meio){
        vtr_aux[k] = vtr[inicio];
        inicio += 1;
        k++;
    }

    while (fim <= f){
        vtr_aux[k] = vtr[fim];
        fim += 1;
        k++;
    }

    for(k = i; k < f+1; k++){
        vtr[k] = vtr_aux[k-i];
    }


}


void mergesort(int * vtr,int i, int f, int mod){
    if (f > i){
        int meio = (i+f)/2;
        mergesort(vtr,i, meio,mod);
        mergesort(vtr,meio+1,f,mod);
        merge(vtr,i,meio,f,mod);
    }
}


int main(){
    int n,m,i;
    scanf("%d %d",&n, &m);

    printf("%d %d\n",n,m);

    while (n!= 0 && m != 0){
        int vtr[n];
        for(i = 0; i < n; i++){
            scanf("%d",&vtr[i]);
        }

        mergesort(vtr,0,n-1,m);

        for(i = 0; i < n; i++){
            printf("%d\n",vtr[i]);
        }
        scanf("%d %d",&n, &m);

        printf("%d %d\n",n,m);

    }
    return 0;
}
