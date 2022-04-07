#include <stdio.h>

int checar(char n[]){
    int i,x=1,rslt = 0;
    char vtr [] = {'C','O','B','O','L'}, letras[51];
    letras[0] = n[0];

    for(i = 0; n[i]!='\0'; i++){
        if(n[i]=='-'){
            letras[x] = n[i-1];
            letras[x+1] = n[i+1];
            x+=2;
        }

    }
    letras[x] = n[i-1];
    letras[x+1] = '\0';

    x= 0;

    for(i = 0; letras[i]!='\0'; i+=2){
        if((letras[i] == vtr[x] || letras[i] == vtr[x]+32) || (letras[i+1] == vtr[x] || letras[i+1] == vtr[x]+32)){
            x++;
        }
        else return 0;
    }

    return 1;

}

int main(){
    char n[50];
    while(scanf("%s",n) != EOF){

        if(checar(n)) printf("GRACE HOPPER\n");
        else printf("BUG\n");

    }
    return 0;
}