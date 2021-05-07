#include <stdio.h>

int main(){
    int nota,moeda,i,j;
    int notas [6] = {100,50,20,10,5,2};
    int moedas [6] = {100,50,25,10,5,1};
    scanf("%d.%d",&nota,&moeda);
    puts("NOTAS:");
    for(i = 0; i < 6;i++){
        printf("%d nota(s) de R$ %d.00\n",nota/notas[i],notas[i]);
        nota = nota%notas[i];
    }
    moeda += nota*100;
    puts("MOEDAS:");
    for(i = 0; i < 6;i++){
        printf("%d moeda(s) de R$ %.2f\n",moeda/moedas[i],moedas[i]/100.0);
        moeda = moeda%moedas[i];
    }

    return 0;
}