#include <stdio.h>


typedef struct {
    char carne[20];
    int peso;
} churras;

void ordena(int u,churras n[]){
    int o=1,i;
    while (o){
        o = 0;
        for(i = 0; i < u-1;i++){
            if(n[i].peso > n[i+1].peso){
                o = 1;
               churras temp = n[i];
               n[i] = n[i+1];
               n[i+1] = temp;


            }
        }
    }
}



void escreve(int u, churras n[]){
    int i;
    printf("%s",n[0].carne);
    for (i = 1; i < u; i++){
        printf(" %s",n[i].carne);
    }
    puts("");
}

int main(){
    int n,i;
    while(scanf("%d",&n) != EOF){
        churras comida[n];
        for(i = 0;i < n;i++){
            scanf("%s %d",comida[i].carne,&comida[i].peso);

        }

        ordena(n,comida);

        escreve(n,comida);
    }
    return 0;
}

