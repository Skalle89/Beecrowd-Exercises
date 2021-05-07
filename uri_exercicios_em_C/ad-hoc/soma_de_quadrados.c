#include <stdio.h>
#include <math.h>

void quadrados(int n){
    if(n >= 0) {
        int i;
        for(i = 0; i < (int) (pow(n,0.5))+1; i ++){
            if(pow((n-i*i),0.5) == (int) pow((n-i*i),0.5)){
                puts("YES");
                return;
            }
        }
    }

    puts("NO");


}


int main(){
    int a;
    while(scanf("%d",&a)!=EOF) {
        quadrados(a);
    }

    return 0;
}