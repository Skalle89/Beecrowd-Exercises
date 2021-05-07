#include <stdio.h>
#include <stdlib.h>

typedef struct tam{
    char palavra [51];
    int tam;
    struct tam *proximo;

}Tam;

Tam * inserir_na_lista(Tam * lista, char word [], int len){
    Tam * novo = malloc(sizeof(Tam));

    novo->tam = len;

    int x;
    for(x = 0; word[x] != '\0'; x++){
        novo->palavra[x] = word[x];
    }

    if(lista == NULL){
        novo->proximo = lista;
        return novo;
    }


    Tam * p = lista, * ant = NULL;

    while (p != NULL && p->tam >= novo->tam){
        ant = p;
        p = p->proximo;
    }

    if(ant == NULL){
        novo->proximo = lista;
        lista = novo;
    }

    else{
        novo->proximo = ant->proximo;
        ant->proximo = novo;
    }


    return lista;

}

void exibir(Tam * lista){
    Tam *p = lista;

    printf("%s",p->palavra);
    p = p->proximo;

    while (p != NULL){
        printf(" %s",p->palavra);

        p = p-> proximo;
    }
    puts("");
}


int main(){

    int n,i;

    scanf("%d ",&n);


    for(i = 0;i < n; i++){
        Tam * lista = NULL;

        char linha [51*50];
        scanf("%5099[^\n]",linha);
        getchar();

        char word[51];
        int x,y= 0;

        for(x = 0; linha[x] != '\0';x++){

            if(linha[x] != ' '){
                word[y] = linha[x];
                y ++;
            }

            else{
                word[y] = '\0';
                lista = inserir_na_lista(lista,word,y);
                y = 0;
            }

        }

        word[y] = '\0';
        lista = inserir_na_lista(lista,word,y);

        exibir(lista);

    }

    return 0;
}