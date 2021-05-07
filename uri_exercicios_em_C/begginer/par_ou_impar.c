#include <stdio.h>

int main(){
    int n,m,i;
    scanf("%d",&n);
    for(i = 0; i < n ;i++){
        scanf("%d",&m);
        if(m == 0){
            puts("NULL");
        }
        else if (m%2 == 0){
            if(m > 0) puts("EVEN POSITIVE");
            else puts("EVEN NEGATIVE");
        }
        else {
            if(m > 0) puts("ODD POSITIVE");
            else puts("ODD NEGATIVE");
        }
    }

    return 0;
}