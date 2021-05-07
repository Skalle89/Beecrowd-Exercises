#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elem{
    char cor [10];
    char tam;
    char nome [100];

    struct elem * prox;
}Elem;

typedef struct final{
    Elem * inicio;
    Elem * final;

}Final;

Final * final_start(){

    Final * f = malloc(sizeof(Final));
    f->inicio = NULL;
    f->final = NULL;
    return f;
}

int lista_vazia(Final * f){

    return  f->inicio == NULL;
}


int comparar_cor(char c1[], char c2[]){
    if(strlen(c1) > strlen(c2)) return 0;

    return 1;
}

int comparar_tamanho(char t1, char t2){

    int v ['P'+1];
    v['P'] = 0;
    v['M'] = 1;
    v['G'] = 2;

    if (v[t1] > v[t2]) return 0;

    return 1;
}


int comparacoes(Elem * aux, Elem * novo){
    if (!comparar_cor(aux->cor,novo->cor)) return 0;

    if (strcmp(aux->cor,novo->cor) == 0 && !comparar_tamanho(aux->tam, novo->tam)) return 0;

    if (strcmp(aux->cor,novo->cor) == 0 && aux->tam == novo->tam && strcmp(aux->nome,novo->nome) > 0) return 0;

    return 1;

}


Final * colocar_na_lista(Final * f, char nome[],char cor[], char tam){

    Elem * novo = malloc(sizeof(Elem));

    strcpy(novo -> nome,nome);
    strcpy(novo -> cor, cor);
    novo->tam = tam;

    if(lista_vazia(f)){
        f->inicio = novo;
        f->final = novo;
    }

    else{
        Elem * aux = f->inicio, * ant = NULL;

        while (aux != NULL && comparacoes(aux,novo)){

            ant = aux;
            aux = aux->prox;
        }

        if (ant == NULL){
            novo->prox = f->inicio;
            f->inicio = novo;
        }
        else if (aux == NULL) {
            ant->prox = novo;
            f->final = novo;
        }
        else{
            novo->prox = aux;
            ant->prox = novo;
        }

    }

    return f;
}

void escrever_resultado(Final * fila){
    if(!lista_vazia(fila)){
       Elem * e = fila->inicio;
       while(e != NULL){
           printf("%s %c %s\n",e->cor,e->tam,e->nome);
           e = e ->prox;
       }
    }
}

int main(){
    int n,i;
    scanf("%d ",&n);
    while ( n !=  0) {

        char nome[100], cor[10], tam;

        Final * camisas = final_start();

        for (i = 0; i < n; i++) {

            scanf("%99[^\n]%*c",nome);
            scanf("%9[^\n^' '] %c%*c",cor,&tam);

            colocar_na_lista(camisas,nome,cor,tam);

        }
        escrever_resultado(camisas);

        scanf(" %d",&n);
        getchar();
        if(n != 0) puts("");

    }

    return 0;
}