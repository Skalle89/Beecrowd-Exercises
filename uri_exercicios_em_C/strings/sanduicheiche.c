#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void pegar_ultimo(char *p, char *q,int z, int *o){
    int j;
    for(j = strlen(p)-1; j > strlen(p)-1-z; j--){
                q[*o] = p[j];
                *o +=1;
        }

}

void pegar_antepenultimo(char *p, char *parte,int z,int * y){
    int k;
    for(k = strlen(p)-1-z;k > (int)(strlen(p)-1-2*z); k --){
            parte[*y] = p[k];
            *y +=1;
    }
}


int  comparar(char * parte, char * q, int z){
    int h;

    for(h = 0; h < z; h++){
        if (parte[h] != q[h]) {
            return 0;
        }

    }

    return 1;

}

void mostrar_resultado(char p[],int cortes[],int val){
        int f,y;

        if (val == 0)printf("%s\n",p);

        else{
            for( f = val-1; f > -1; f--){
                for(y = 0; y < strlen(p)-cortes[f];y++){
                    printf("%c",p[y]);
                }
                puts("");
            }
        }
}

int main(){
    char p[31];
    while(scanf(" %30[^\n]",p) != EOF){
        int cortes[100],val = 0;
        int z = 1;
        char *q = malloc(sizeof(char)*z), *parte = (char*) malloc(sizeof(char)*z);

        while (strlen(p) >= 2*z){

            int a = 0;
            pegar_ultimo(p,q,z,&a);
            int b = 0;
            pegar_antepenultimo(p,parte,z,&b);

            if(comparar(parte,q,z)){
                cortes[val] = z;
                val ++;
            }

            z++;

        }

        mostrar_resultado(p,cortes,val);

        free(q);
        free(parte);

    }
    return 0;
}