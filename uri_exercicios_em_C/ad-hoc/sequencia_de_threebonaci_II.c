#include <stdio.h>

int checar3(long int n){
    while (n > 0){
        if(n%10 == 3) return 1;
        n /=10;
    }
    return 0;
}
int * criar_thrib(){
   static int v[61],i = 0,a=2,b=1;
     while (i < 61) {
         int c = a+b;
         if(checar3(c) || c % 3 == 0) {
             v[i] = c;
             i++;
         }
         b = a;
         a = c;
     }

     return v;
}

int main(){
     int n,*thrib;
     thrib = criar_thrib();
      while(scanf("%d",&n) != EOF){
        printf("%ld\n",thrib[n-1]);
     }
    return 0;
}