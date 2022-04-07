#include <stdio.h>


int main(){
    int i;
    char d;
    char n [101];

    scanf(" %c",&d);
    scanf("%s",n);

    while(d != '0' || n[0] != '0'){

        char rslt [101];
        int z=0;

        for(i = 0; n[i] != '\0'; i++){
            if(n[i] != d){
                rslt[z] = n[i];
                z ++;
            }
        }

        if (z == 0){
                rslt[0] = '0';
                rslt[1] = '\0';
            }

        else rslt[z] = '\0';


        if(rslt[0] == '0' && z > 1){

            int ok = 0;
            z = 0;
            char nz[101];

            for (i = 0; rslt[i] != '\0'; i++) {
                if(rslt[i] != '0' && !ok) ok = 1;
                if(ok){
                    nz[z] = rslt[i];
                    z++;
                }
            }
            if (z == 0){
                nz[0] = '0';
                nz[1] = '\0';
            }

            else nz[z] = '\0';
            for (i = 0; nz[i] != '\0'; i++) {
                printf("%c", nz[i]);
            }
            puts("");
        }
        else{
            for (i = 0; rslt[i] != '\0'; i++) {
                printf("%c", rslt[i]);
            }
            puts("");

        }
        scanf(" %c",&d);
        scanf("%s",n);


    }


    return 0;
}