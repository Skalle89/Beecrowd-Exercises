#include <stdio.h>
#include <stdlib.h>
int i;

int tamanho(char s[]){
    int t = 0;
    for(i = 0; s[i] != '\0'; i++){
        t ++;
    }
    return t;

}

void mostrar_resultado(char s[]){
    for(i = 0; s[i] != '\0'; i++){
        printf("%c",s[i]);
    }
    puts("");
}


void primeiro_passo(char s []){

    for(i = 0; s[i] != '\0'; i++){
        if( 'a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z') s[i] += 3;
    }

}


void segundo_passo(char s[], int tam){

    char * inv = malloc(tam*sizeof(char));

    for(i = tam-1; i >  -1; i--){
        inv[tam-1-i] = s[i];
    }

    for(i = 0; i < tam; i++){
        s[i] = inv[i];
    }

    free(inv);

}

void terceiro_passo(char s[], int tam){
    for(i = tam/2; i < tam; i++){
         s[i] -= 1;
    }


}

void cript(char s[], int t){

    primeiro_passo(s);
    segundo_passo(s,t);
    terceiro_passo(s,t);
    mostrar_resultado(s);
}


int main(){
    int n,j;
    char w [1001];
    scanf("%d",&n);
    for(j = 0; j < n; j++){
        scanf(" %1000[^\n]",w);
        cript(w,tamanho(w));
    }
    return 0;
}