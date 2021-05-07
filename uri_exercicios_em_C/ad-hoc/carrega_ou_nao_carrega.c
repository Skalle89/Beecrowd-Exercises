#include<stdio.h>
#include <math.h>

void converter_binario(unsigned long long int * a, unsigned long long int * b,int *b1, int *b2){
    int t = 31,i;
    for(i = 0; i < 32; i++){
     *(b1 + i) = 0;
     *(b2 + i) = 0;
   }
    while (*a > 0 || *b > 0){
        b1[t] = * a%2;
        b2[t] = * b%2;
        * a /= 2;
        * b /= 2;
        t--;
    }

}

void comparar_bits(int *b1, int *b2, int *rslt){
    int i;
  for(i = 0; i < 32; i++){
     *(rslt + i) = 0;

   }
  for(i = 31; i > -1; i--){
     if(b1[i] != b2[i]) rslt[i] = 1;
     else rslt[i] = 0;
   }

}

void converter_decimal(int *rslt){
   int i;
   unsigned long long int final = 0;
   for(i = 0; i < 32; i++){
     final += rslt[i]*(unsigned long long int)pow(2,31-i);
   }
   printf("%llu\n",final);
}


int main(){
    int p = 32;
    unsigned long long int a, b;
    int b1[p],b2[p],rslt[p];
    while(scanf("%llu %llu",&a,&b)!=EOF){
        converter_binario(&a,&b,b1,b2);
        comparar_bits(b1,b2,rslt);
        converter_decimal(rslt);
    }
    return 0;
}