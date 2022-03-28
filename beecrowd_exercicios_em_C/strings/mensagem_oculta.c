#include <stdio.h>


void escrever_resultado(char rslt[]){
    int i;
     for(i = 0; rslt[i] != '\0'; i++){
        printf("%c",rslt[i]);
    }
    puts("");
}


void uncript(char cript[], char msg[]){
    int i,ok = 1, z= 0;
    for(i = 0; cript[i] != '\0'; i++){
        if(ok && cript[i] != ' '){
            msg[z] = cript[i];
            z ++;
            ok = 0;
        }

        if(!ok && cript[i] == ' ') ok = 1;
    }
    msg[z] = '\0';


}


int main(){
    int n,i;
    scanf("%d ",&n);
    char cript[51],msg[51],spare;

    for(i = 0; i < n;i++){

        scanf("%50[^\n]%c",cript,&spare);

        uncript(cript,msg);

        escrever_resultado(msg);


    }
    return 0;
}

