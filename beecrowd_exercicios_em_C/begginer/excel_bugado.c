#include <stdio.h>
#include <string.h>
int main(){

    char v[10];
    int p [] = {1,26,26*26}, i;
    while(scanf("%s",v) != EOF){
        int rslt = 0;

        for(i = 0; i < strlen(v); i ++){
            rslt += (v[i] - 'A' + 1)*p[strlen(v)-i-1];
        }

        if(rslt > 'D' - 'A' + 1 + ('F' - 'A' + 1)*26 + ('X' - 'A' + 1)*26*26 || strlen(v) > 3)
            puts("Essa coluna nao existe Tobias!");

        else printf("%d\n",rslt);

    }

    return 0;

}


//        printf("%d\n",v[2] - 'A' + 1 + (v[1]-'A' + 1)*26 + (v[0] - 'A' + 1)*26*26);