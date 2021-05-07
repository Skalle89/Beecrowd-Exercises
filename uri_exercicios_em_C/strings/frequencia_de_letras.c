#include <stdio.h>


int o_maior(char alpha[]){
    int maior = alpha[0],i;
    for (i = 0; i < 26; i++){
        if (alpha[i] > maior) maior = alpha[i];
    }
    return maior;
}


void zerar_alpha(char alpha[]){
    int i;
    for(i = 0; i < 26; i++){
        alpha[i] = 0;
    }
}


void checar_freq(char frase[], char alpha[]){
    int i;
    for(i = 0; frase[i] != '\0'; i++){
        if('a' <= frase[i] && frase[i] <='z') alpha[frase[i]-'a'] ++;
        if('A' <= frase[i] && frase[i] <='Z') alpha[frase[i]-'A'] ++;
    }
}

void escrever_val(char alpha[]){
    int i,z = 0,maior = o_maior(alpha);
    char rslt[26];

    for(i = 0; i < 26; i++){
        if(alpha[i] == maior){
            rslt[z] = i + 'a';
            z++;
        }

    }
    rslt[z] = '\0';

    for(i = 0; rslt[i] != '\0'; i++){
        printf("%c",rslt[i]);
    }
    puts("");

}


int main(){
    int n,i;
    scanf("%d", &n);
    for(i = 0; i < n;i++){
        char alpha[26];
        zerar_alpha(alpha);

        char frase[201];
        scanf(" %200[^\n]",frase);

        checar_freq(frase,alpha);

        escrever_val(alpha);

    }
    return 0;
}

