#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    scanf("%d",&a);

    while(a!= 0 ){

        scanf("%d",&b);
        scanf("%d",&c);

        printf("%d\n",(int)sqrt((a*b*(100.0/c))));

        scanf("%d",&a);
    }

    return 0;
}