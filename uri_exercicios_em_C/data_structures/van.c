#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct van{
    char nome [100];
    char mora;
    int distancia;

}Van;

void mostrar(Van t[],int q){
    int i;
    for(i = 0; i < q; i++){
        printf("%s\n",t[i].nome);
    }
}

int comparar(Van v,Van p){

    int comp = strcmp(v.nome,p.nome);

    return v.distancia > p.distancia || v.distancia == p.distancia && v.mora > p.mora
    || v.distancia == p.distancia && v.mora == p.mora && comp > 0;
}

int get_pivot(Van v[], int i, int q){

    int b = i, e = q; Van temp;
    Van pivot = v[i];

    while (b < e){

        while(comparar(v[b],pivot) <= 0){
            b++;
        }
        while(comparar(v[e],pivot) > 0){
            e--;
        }
        if(b < e){
            temp = v[b];
            v[b] = v[e];
            v[e] = temp;
        }

    }

    v[i] = v[e];
    v[e] = pivot;

    return e;

}

void quick(Van v[], int i, int q){

    if(i < q) {
        int pivot = get_pivot(v,i,q);
        quick(v,i,pivot-1);
        quick(v,pivot+1,q);
    }

}

int main(){
    int q,i;
    while(scanf("%d ",&q) != EOF){
        Van transp[q];
        char nome [100],mora;
        int distancia;

        for(i = 0; i < q; i++){

            scanf("%s %c %d",nome,&mora,&distancia);

            strcpy(transp[i].nome,nome);
            transp[i].mora = mora;
            transp[i].distancia = distancia;

        }
        quick(transp,0,q-1);

        mostrar(transp, q);

    }
    return 0;
}

//int comparar_2(Van v,Van p){
//    if(v.distancia > p.distancia) return 1;
//
//    if(v.distancia == p.distancia || v.mora > p.mora) return 1;
//
//    if(v.distancia == p.distancia || v.mora == p.mora || strcmp(v.nome,p.nome) > 0) return 1;
//
//    return 0;
//}
