#include <stdio.h>

int main(){
    int a,i;
    int b [7] = {100,50,20,10,5,2,1};
    scanf("%d",&a);
    printf("%d\n",a);
    for(i = 0; i < 7;i++){
        printf("%d nota(s) de R$ %d,00\n",a/b[i],b[i]);
        a = a%b[i];
    }

    return 0;
}