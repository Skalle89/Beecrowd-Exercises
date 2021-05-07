#include <stdio.h>
#include <stdlib.h>

typedef struct  elemento{
    int h;
    int m;
    int c;
    int tempo;

    struct elemento * prox;
}Elemento;

typedef struct fila{
    Elemento * primeiro;
    Elemento * ultimo;
}Fila;

Fila * criar_fila(){
    Fila * f = malloc(sizeof(Fila));
    f->primeiro = NULL;
    f->ultimo = NULL;

    return f;
}

Fila * preencher_fila(Fila * fila, int h, int m, int c){

    Elemento * novo = malloc(sizeof(Elemento));
    novo->c = c;novo->h = h;novo->m = m;
    novo->prox = NULL;

    if(fila->primeiro == NULL){

        if  (m > 0 && m < 30) {
                novo->c = c - (30 - m);
                novo->m = 30;
            }
        else if (m > 30){
            novo->c = c - (60 - m);
            novo->m = 60;
        }

        novo->tempo = novo->h*60 + novo->m;
        fila->primeiro = novo;
        fila->ultimo = novo;
    }
    else{

        if (m > 0 && m < 30) {
            novo->c = c - (30 - m);
            novo->m = 30;
        }
        else if (m > 30){
            novo->c = c - (60 - m);
            novo->m = 60;
        }

        if (fila->ultimo->tempo + 30 < novo->h*60 + novo->m){

            novo->tempo = novo->h*60 + novo->m;
        }

        else novo->tempo = fila->ultimo->tempo + 30;

        fila->ultimo->prox = novo;
        fila->ultimo = novo;
    }

    return fila;

}

int atendimento(Fila * fila){
    int crit = 0;
    Elemento * p = fila->primeiro;
    while(p != NULL){
        if(p->c < p->tempo - (p->h*60 + p->m)){
            crit ++;
        }
        p = p ->prox;
    }

    return crit;

}

int main(){
    int n,i;
    while(scanf("%d",&n)!=EOF){

        int h,m,c,pacientes;
        Fila * fila_sus = criar_fila();

        for(i = 0; i < n; i++){

            scanf("%d %d %d",&h,&m,&c);

            fila_sus = preencher_fila(fila_sus,h,m,c);

        }
        pacientes = atendimento(fila_sus);
        printf("%d\n",pacientes);
    }
    return 0;
}