#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dict{
    char codigo [20];
    char letra[1];
    struct dict * proximo;
}Dict;

Dict * criar_lista(Dict * a){

     char alpha [26][20] = {"=.===", "===.=.=.=", "===.=.===.=", "===.=.=", "=", "=.=.===.=",
     "===.===.=", "=.=.=.=","=.=", "=.===.===.===", "===.=.===", "=.===.=.=",
     "===.===", "===.=", "===.===.===", "=.===.===.=", "===.===.=.===",
     "=.===.=", "=.=.=", "===", "=.=.===", "=.=.=.===", "=.===.===",
     "===.=.=.===", "===.=.===.===", "===.===.=.="};

    int i;
    for(i = 25; i > -1; i--){
        Dict * novo = malloc(sizeof(Dict));
        strcpy(novo->codigo,alpha[i]);
        novo->letra[0] = i + 'a';
        novo->proximo = a;
        a = novo;
    }
    return a;

}


void traduzir(char word[], Dict * alpha, int pnt){
    Dict * p = alpha;

    while(p!= NULL){
        if(strcmp(word,p->codigo)==0){
            if (pnt == 7){
                printf("%s ",p->letra);
                return;
            }
            else{
               printf("%s",p->letra);
               return;
            }
        }
        p = p->proximo;
    }
}

void separar_palavras(char m [], Dict * alpha){
    int x,y = 0,pnt=0,ok =1;
    char word[20];
    for(x = 0; m[x] != '\0'; x++){

        if(pnt == 3 || pnt == 7){
            word[y]='\0';
            ok = 1;
            y = 0;
            traduzir(word,alpha,pnt);
            pnt = 0;
        }

        if(m[x] == '.' && m[x+1] == '.' && ok == 1){
            ok = 0;
        }
        if(ok){
            word[y] = m[x];
            pnt = 0;
            y++;
        }
        else{
            while( m[x] == '.'){
                pnt ++;
                x++;
            }
            x--;
        }
    }
    word[y] = '\0';
    traduzir(word,alpha,pnt);


}

int main(){
    Dict * alpha = NULL;
    alpha = criar_lista(alpha);
    int n, i;
    scanf("%d ",&n);
    char morse[1000];
    for(i = 0; i < n; i++){
        scanf("%999[^\n]",morse);
        getchar();
        separar_palavras(morse,alpha);
        puts("");

    }
    return 0;
}