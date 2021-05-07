#include <stdio.h>

void mostrar_valores(int n,int vtr[]){
    int i;
    if(vtr[0] % 2 == 0) {
        for (i = 0; i < n; i++) {
                printf("%d\n", vtr[i]);

        }
    }
    else {
        for (i = n-1; i > -1; i--) {
                printf("%d\n", vtr[i]);
        }
    }
}


void trocar(int d, int e, int vtr[]){
    int temp = vtr[d];
    vtr[d] = vtr[e];
    vtr[e] = temp;

}


int particao(int i, int f, int vtr[f]){
   int direita = f, esquerda = i;
   int pivo = vtr[i];

   while(esquerda < direita){
       while (vtr[esquerda] <= pivo){
           esquerda += 1;
       }
       while(vtr[direita] > pivo){
           direita -= 1;
       }

       if(esquerda < direita) trocar(direita,esquerda,vtr);
   }

   vtr[i] = vtr[direita];
   vtr[direita] = pivo;
   return direita;
}


void quicksort(int i,int f,int vtr[f]){
    if (f > i) {
        int pos_pivo = particao(i, f, vtr);
        quicksort(i, pos_pivo-1, vtr);
        quicksort(pos_pivo+1,f,vtr);
    }
}


int main(){
    int n,i;
    scanf("%d",&n);
    int vtr[n];
    int p=0,im=0;

    for(i = 0; i < n; i++){
        scanf("%d",&vtr[i]);
        if(vtr[i] %2 == 0) p ++;
        else im++;
    }

    int par[p], impar[im];

    p =0; im = 0;

    for(i = 0; i < n; i++){
        if(vtr[i] %2 == 0) par[p] = vtr[i], p ++;
        else impar[im] = vtr[i], im ++;
    }

    quicksort(0,im-1,impar);
    quicksort(0,p-1,par);
    mostrar_valores(p,par);
    mostrar_valores(im,impar);
    return 0;
}