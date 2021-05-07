#include <iostream>
using namespace std;

int main(){
    int a, b, rslt{};

    cin >> a >> b;

    rslt = b-a;

    if(b-a <= 0) rslt += 24;

    cout << "O JOGO DUROU " << rslt << " HORA(S)" << endl;

    return 0;
}