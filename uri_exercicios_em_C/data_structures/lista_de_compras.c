#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct comp{
    char prod [21];
    int len;
    struct comp * prox;
}Comp;


int comparar(Comp * p, char w2[], int len){
    int x;

    for (x = 0; p->prod[x] != '\0'; x++) {
        if (p->prod[x] != w2[x]) return 0;
    }

    if(len > p->len) return 0;

    return 1;
}

void exibir(Comp * lista){
    Comp *p = lista;

    printf("%s",p->prod);
    p = p->prox;

    while (p != NULL){
        printf(" %s",p->prod);

        p = p-> prox;
    }
    puts("");
}


Comp * colocar_na_lista(Comp * lista, char word[], int len){
    Comp *novo = malloc(sizeof(Comp));

    int x;

    if (lista == NULL){
        for(x = 0; word[x] != '\0';x++){
            novo->prod[x] = word[x];
        }
        novo->len = len;
        novo->prox = lista;
        return novo;
    }

    Comp * p = lista, *ant = NULL;

    while (p != NULL){

        if(comparar(p,word,len)){
           free(novo);
           return lista;
        }
        p= p-> prox;
    }

    for(x = 0; word[x] != '\0';x++){
            novo->prod[x] = word[x];
    }

    novo->len = len;

    p = lista;

    while (p != NULL && strcmp(p->prod,novo->prod) < 0){
        ant = p;
        p = p->prox;
    }

    if(ant == NULL) {
        novo->prox = lista;
        lista = novo;
    }

    else{
        novo->prox = ant->prox;
        ant->prox = novo;
    }

    return lista;

}

Comp * separar_palavras(char linha [], char word [], Comp * lista){
    int x,y= 0;
    for(x = 0; linha[x] != '\0';x++){

            if(linha[x] != ' '){
                word[y] = linha[x];
                y ++;
            }

            else{
                word[y] = '\0';
                lista = colocar_na_lista(lista,word,y);
                y = 0;
            }

        }

    word[y] = '\0';
    lista = colocar_na_lista(lista,word,y);

    return lista;

}

int main(){
    int n,i;
    scanf("%d ",&n);

    for(i = 0; i < n; i++){

        char linha [21*1000];
        scanf("%20999[^\n]",linha);
        getchar();


        char word[21];
        Comp * lista = NULL;

        lista = separar_palavras(linha,word,lista);

        exibir(lista);
        
    }
}
