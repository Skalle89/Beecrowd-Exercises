#include <stdio.h>

int main(){
    int n,fat = 1,i;
    scanf("%d",&n);
    for(i = 2;i < n+1;i++){
        fat *=i;
    }
    printf("%d\n",fat);
    return 0;
}