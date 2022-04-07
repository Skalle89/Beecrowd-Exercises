#include <stdio.h>
#include <stdlib.h>
typedef struct lesmas{
    int vel;
    int nivel;
    struct lesmas * o_maior;
    struct lesmas *prox;
    struct lesmas *fim;
}Lesmas;


int classificar(int n){
    if (n < 10) return 1;
    if (n >= 10 && n < 20) return 2;

    return 3;
}

Lesmas * verificar(Lesmas * a, Lesmas * b){
    if (a->vel < b->vel) return b;

    return a;
}

Lesmas * inserir_lesmas(Lesmas * g, int n){
    Lesmas * novo = malloc(sizeof(Lesmas));
    novo->vel = n;
    novo->nivel = classificar(n);

    if (g == NULL){
        novo->prox = g;
        novo->fim = novo;
        novo->o_maior = novo;
        g = novo;
    }
    else {
        g->fim->o_maior = verificar(g->fim->o_maior,novo);
        novo->o_maior = g->fim->o_maior;
        g->fim->prox = novo;
        g->fim = novo;
    }

    return g;
}


int main(){

    int n,i,val;

    while(scanf("%d",&n)!= EOF){
        Lesmas * grupo = NULL;
        for(i = 0; i < n; i++){
            scanf("%d",&val);
            grupo = inserir_lesmas(grupo, val);
        }

        printf("%d\n",grupo->fim->o_maior->nivel);

    }

    return 0;
}