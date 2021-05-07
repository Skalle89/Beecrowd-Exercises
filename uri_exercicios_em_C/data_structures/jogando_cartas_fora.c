#include <stdio.h>
#include <stdlib.h>


typedef struct cards{
    int num;
    struct cards * prox;
}Cards;

typedef struct stack{
    Cards * topo;
    Cards * base;

}Stack;


Stack * stack_start(){
    Stack * s = malloc(sizeof(Stack));
    s->base = NULL;
    s->topo = NULL;

    return s;
}

Stack * stack_push(Stack *s, int n){
    int i;
    for(i = n; i > 0 ; i--){
        Cards * novo = malloc(sizeof(Cards));
        novo-> num = i;

        if(s->topo == NULL){
            s->topo = novo;
            s->base = novo;
        }
        else{
            novo->prox = s->topo;
            s->topo = novo;
        }
    }

    return s;
}


void stack_pop(Stack * s){

    int retirados [49],x = 0;

    Stack * aux = s;
    while (aux->topo != NULL){
        Cards * pop = aux->topo;
        int info = pop ->num;

        retirados[x] = info;
        x++;

        aux->topo = aux->topo->prox;
        free(pop);

        Cards * base = aux -> topo;
        aux->topo = aux->topo->prox;

        aux->base->prox = base;
        base->prox = NULL;
        aux-> base = base;

    }
    printf("Discarded cards: ");
    int y;
    for(y = 0; y < x-1; y++){
        printf("%d, ",retirados[y]);
    }
    printf("%d\n",retirados[y]);
    printf("Remaining card: %d\n",aux->base->num);

}

int main(){
    int n;
    scanf("%d",&n);
    while(n != 0){

        Stack * cartas = stack_start();
        stack_push(cartas,n);
        stack_pop(cartas);

        scanf("%d",&n);
    }


    return 0;
}