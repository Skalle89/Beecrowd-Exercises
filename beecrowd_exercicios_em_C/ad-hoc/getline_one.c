#include <stdio.h>

int main(){
    char p[100]; int n = 0; double d, resp = 0;
    while (scanf("%s\n%lf",p,&d) != EOF){
        n ++;
        resp += d;
    }
    printf("%.1lf\n",resp/n);
    return 0;
}