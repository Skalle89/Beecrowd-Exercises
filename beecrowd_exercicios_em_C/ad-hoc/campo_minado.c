#include <stdio.h>

void ler_matriz(int n, int m[]){
    int i;
    for (i = 0; i < n;i++){
        scanf("%d",&m[i]);
    }
}


void zerar_rslt(int n, int m[]){
    int i;
    for (i = 0; i < n; i ++){
        m[i] = 0;
    }
}

void campo_minado(int n, int m[], int o[] ){
    int i;
    if(n == 1) o[0] += m[0];
    else{
        for (i = 0; i < n; i++) {
            if (i == 0) o[i] += m[i + 1] + m[i];
            else if (i == n - 1) o[i] += m[i - 1] + m[i];
            else o[i] += m[i - 1] + m[i + 1] + m[i];
        }
    }

}

void escrever_matriz(int n, int m[]){
    int i;
    for (i = 0; i < n;i++){
        printf("%d\n",m[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int campo[n],rslt[n];

    ler_matriz(n,campo);
    zerar_rslt(n,rslt);
    campo_minado(n,campo,rslt);
    escrever_matriz(n,rslt);

    return 0;
}