#include <stdio.h>

int main(){
    int r=1,in=0,gr=0,emp=0,total = 0,p1,p2;
    while(r != 2){
        scanf("%d %d",&p1,&p2);
        if(p1 > p2) in ++;
        else if (p2 > p1) gr ++;
        else emp++;
        total += 1;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&r);
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",total,in,gr,emp);
    if(in > gr) puts("Inter venceu mais");
    else if(in < gr) puts("Gremio venceu mais");
    else puts("Nao houve vencedor");
    return 0;
}