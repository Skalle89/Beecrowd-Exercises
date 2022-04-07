#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ilha{
    char ilha1[31];
    char ilha2[31];

    struct ilha * prox;
    struct ilha * inicio;
    struct ilha * ultimo;

}Ilha;


void checar_inversa(Ilha * ilhas){
    Ilha * i = ilhas->inicio;

    Ilha * p1 = ilhas;
    Ilha * p2 = ilhas;

    while (i != NULL){
        p1 = p1->prox;
        while(p1 != NULL){
            if(strcmp(i->ilha1,p1->ilha1)==0){
                puts("Not a function.");
                return;
            }

            p1 = p1->prox;
        }
        p2 = p2->prox;
        p1 = p2;
        i = p2;

    }

    p1 = ilhas;
    p2 = ilhas;
    i = ilhas->inicio;

    while (i != NULL){
        p1 = p1->prox;
        while(p1 != NULL){
            if(strcmp(i->ilha2,p1->ilha2)==0){
                puts("Not invertible.");
                return;
            }
            p1 = p1->prox;
        }
        p2 = p2->prox;
        p1 = p2;
        i = p2;
    }

    puts("Invertible.");

}

Ilha * pegar_ilhas(char a[], char b[],Ilha * ilhas){

    Ilha * novo = malloc(sizeof(Ilha));
    strcpy(novo->ilha1,a);
    strcpy(novo->ilha2,b);

    if(ilhas == NULL){
        novo->inicio = novo;
        novo->prox = ilhas;
        novo->ultimo = novo;
        return novo;
    }
    else{

        ilhas->ultimo->prox = novo;
        ilhas->ultimo = novo;

        novo->inicio = ilhas->inicio;
        novo->ultimo = novo;
        novo->prox = NULL;

    }

    return ilhas;

}

int main(){
    int n;
    scanf("%d ",&n);

    while(n !=0) {
        int i;

        Ilha *ilhas = NULL;

        for(i = 0; i < n; i ++){

            char lugar[31],lugar2[31];

            scanf("%30[^-> ^' '] -> %30[^-> ^' '^\n]",lugar,lugar2);
            getchar();

            ilhas = pegar_ilhas(lugar,lugar2,ilhas);

        }
        checar_inversa(ilhas);

        scanf("%d",&n);
        getchar();
    }
    return 0;
}


//    while (p1 != NULL){
//        printf("%s %s %s\n",p1->ilha1,p1->ilha2,p1->inicio->ilha1);
//        p1 = p1->prox;
//    }
