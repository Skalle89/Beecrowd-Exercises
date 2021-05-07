#include <stdio.h>

int main(){
    int vtr[4],i;

    for(i = 0; i < 4; i++){
        scanf("%d",&vtr[i]);

    }

    int temp = (vtr[2]*60 + vtr[3]) - (vtr[0]*60 + vtr[1]);

    if(temp <= 0) temp += 1440;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",temp/60,(temp)%60);

    return 0;
}
