#include <stdio.h>

int regioes(int * vtr,int i,int n,int k) {

    int j;
    if (n == 1) {
       return vtr[0];
    }

    i = (i+k-1)%n;
    vtr[i] = 0;

    int vtr_aux[n-1],z = 0;


    for(j = 0; j < n; j++){
      if(vtr[j] != 0) {
          vtr_aux[z] = vtr[j];
          z++;
      }
    }

    return regioes(vtr_aux,i,n-1,k);

}


void preencher_vetor(int * vtr, int n){
    int i;
    vtr [0] = 2;
    for (i = 1; i < n; i++){
        vtr[i] = i+2;
    }
}

int eh_13(int n, int k){
   if(n+1 == 13) return 1;

   int vtr[n];

   preencher_vetor(vtr,n);

   int resp = regioes(vtr,0,n,k);

   if(resp == 13) return k;

   return eh_13(n,k+1);

}


int main(){
    int n;
    scanf("%d",&n);
    while(n!=0){
        int resp = eh_13(n-1,2);
        printf("%d\n",resp);
        scanf("%d",&n);
    }
    return 0;

}

