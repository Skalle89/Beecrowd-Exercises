#include <stdio.h>

int main(){
    char s [16];
    scanf("%s",s);
    while (s[0] != '0'){
        unsigned long i,q = 0,fat = 1;

        for(i = 0; s[i] != '\0';i++){
            q ++;
        }

        for(i = 2; i < q+1; i ++){
            fat *= i;
        }

        printf("%lu\n",fat);

        scanf("%s",s);
    }

    return 0;
}