#include <stdio.h>

int contar_leds(char s []){
    int l = 0,i;
    int leds [] = {6,2,5,5,4,5,6,3,7,6};
    for(i = 0; s[i] != '\0'; i++){
       l += leds[(int)(s[i]-'0')];
    }
    return l;
}

int main(){
    char led[101];

    int n,i;
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%s",led);
        printf("%d leds\n",contar_leds(led));
    }

    return 0;
}