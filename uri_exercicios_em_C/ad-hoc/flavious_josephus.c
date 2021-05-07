#include <stdio.h>
#include <stdlib.h>

int flavious(int * vtr,int i,int n,int k) {
    int j;
    if (n == 1) {
       return vtr[0];
    }
    i = (i+k-1)%n;
    vtr[i] = 0;

    int * vtr_aux = (int *)malloc((n-1)*sizeof(int)),z = 0;


//    printf("%d %d %d\n",vtr[(k)%n+1],vtr[k%n], vtr[(k)%n-1]);

//    for(j = k%n+1; j < n; j++){
//        vtr_aux[z] = vtr[j];
//        z++;
//    }
//    for(j = 0; j < (k)%n-1; j++){
//        vtr_aux[z] = vtr[j];
//        z++;
//    }

    for(j = 0; j < n; j++){
      if(vtr[j] != 0) {
          vtr_aux[z] = vtr[j];
          z++;
      }
    }

    free(vtr);
    return flavious(vtr_aux,i,n-1,k);

}

void preencher_vetor(int * vtr, int n){
    int i;
    for (i = 0; i < n; i++){
        vtr[i] = i+1;
    }
}

int main(){
    int c,i;
    scanf("%d",&c);
    for(i = 0; i < c; i++){
        int n,k;
        scanf("%d %d",&n,&k);
        int * vtr = (int *)malloc(n*sizeof(int));
        preencher_vetor(vtr,n);
        int resp = flavious(vtr,0,n,k);
        printf("Case %d: %d\n",i+1,resp);


    }
    return 0;

}