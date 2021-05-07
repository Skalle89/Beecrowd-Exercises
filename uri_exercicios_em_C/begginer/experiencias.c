#include <stdio.h>

int main(){
    int i,n,m,r=0,s=0,c=0;
    char o;
    scanf("%d",&n);
    for( i = 0;i < n;i++){
        scanf("%d %c",&m,&o);
        if(o == 'R') r+=m;
        else if(o == 'S') s+=m;
        else c+=m;
    }
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%"
           "\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",r+s+c,c,r,s,(c*100.0/(r+s+c)),(r*100.0/(r+s+c)),(s*100.0/(r+s+c)));
    return 0;
}