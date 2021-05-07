#include <stdio.h>
#include <stdlib.h>

void mostrar(int v[], int n){
    printf("%d",v[0]);
    int i;
    for(i = 1; i < n; i++){
        printf(" %d",v[i]);
    }
    puts("");
}

void mergesort(int v[], int i, int m, int n){
    int b = i, e = m+1, aux[n-i], k = 0;
    while (b <= m && e <=n) {

        if (v[b] <= v[e]) {
            aux[k] = v[b];
            b++;
        }
        else {
            aux[k] = v[e];
            e++;
        }
        k++;
    }

    while (b <= m){
        aux[k] = v[b];
        b++,k++;
    }

    while (e <= n){
        aux[k] = v[e];
        e++,k++;
    }

    for(k = i; k < n+1; k ++){
            v[k] = aux[k-i];
        }

    }


void merge(int v[], int i , int n){
    if (i < n){
        int m = (i+n)/2;
        merge(v,i,m);
        merge(v,m+1,n);
        mergesort(v,i,m,n);
    }

}



int main(){

    int nc,i;
    scanf("%d",&nc);
    for(i = 0; i < nc;i++){
        int n,j;
        scanf("%d",&n);
        int altura [n];
        for(j = 0; j < n;j++){
            scanf("%d",&altura[j]);
        }

        merge(altura,0,n-1);
        mostrar(altura,n);
    }

    return 0;
}