#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct trad{
    char jap [81];
    char port [81];
    struct trad * proximo;

}Trad;

int comparar(char a[], char b[]){
    int x;
    for(x = 0; a[x] != '\0'; x++){
        if(a[x] != b[x]) return 0;
    }
    return 1;
}


Trad * colocar_na_lista(Trad * lista, char jap[], char port[]){
    Trad * novo = malloc(sizeof(Trad));

    int x;

    for (x = 0; jap[x] != '\0'; x++) {
        novo->jap[x] = jap[x];
    }

    for (x = 0; port[x] != '\0'; x++) {
        novo->port[x] = port[x];
    }

//    strcpy(novo->jap,jap);
//    strcpy(novo->port,port);


    novo->proximo = lista;
    lista = novo;

    return lista;

}

void traduzir(Trad *lista, char word[],int x){
    Trad * p = lista;
    while(p != NULL){
        if(strcmp(p->jap,word)==0){
            if(x == 1 && word[0] != '\0')printf("%s ",p->port);
            else printf("%s",p->port);
            return;
        }
        p= p->proximo;
    }
    if(x == 1 && word[0]!='\0')printf("%s ",word);
    else printf("%s",word);

}



void pegar_palavras(Trad * lista, char frase []){
    char word[81];
    int x,y= 0;

    for(x = 0; frase[x] != '\0';x++){

        if(frase[x] != ' '){
            word[y] = frase[x];
            y ++;
        }

        else{
            word[y] = '\0';
            y = 0;
            traduzir(lista,word,1);
        }

    }

    word[y] = '\0';
    traduzir(lista,word,0);
    puts("");



}


int main(){

    int t,i;

    scanf("%d",&t);

    for(i = 0;i < t; i++){

        Trad * lista = NULL;

        int n,m,j,k;

        scanf("%d %d ",&n,&m);

        char jap[81],port[81];

        for(j=0; j < n; j++){
            scanf("%80[^\n]",jap);
            getchar();
            scanf("%80[^\n]",port);
            getchar();
            lista = colocar_na_lista(lista,jap,port);

        }


        char frase[81];
        frase[0]= '\0';
        for(k=0; k < m; k++){
            scanf("%80[^\n]",frase);
            getchar();
            pegar_palavras(lista,frase);
            frase[0]= '\0';

        }

        puts("");

    }

    return 0;
}

