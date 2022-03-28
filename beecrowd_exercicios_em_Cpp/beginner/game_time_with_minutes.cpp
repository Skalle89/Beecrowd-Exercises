#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    int rslt = (c*60 + d) - (a*60 + b);

    if(rslt <= 0) rslt += 24*60;

    cout << "O JOGO DUROU " << rslt/60 << " HORA(S) E " << rslt%60 << " MINUTO(S)"<<  endl;

    return 0;
}