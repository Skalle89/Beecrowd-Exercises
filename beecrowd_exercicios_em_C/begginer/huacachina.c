#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char t[9], p1[6],p2[2];
    int total = 0,v = 0,i;

    scanf("%s",t);
    while(strcmp(t,"ABEND")!=0){
        for(i = 0; i < 6;i++){
            p1[i] = t[i];
        }
        for(i = 7; i < 9;i++){
            p2[i-7] = t[i];
        }
        if(strcmp(p1,"SALIDA")==0){
            v ++;
            total += atoi(p2);
        }
        else if(strcmp(t,"VUELTA")==0){
            total -= atoi(p2);
            v --;
        }
        scanf("%s",t);
    }

    printf("%d\n%d\n",total,v);

    return 0;

}
