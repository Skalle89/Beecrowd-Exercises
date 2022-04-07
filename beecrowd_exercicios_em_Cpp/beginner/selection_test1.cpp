#include <iostream>
using namespace std;

int selection_test(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if( b > c && d > a && c+d > a+b && c > 0 && d > 0 && a % 2 == 0){
        cout << "Valores aceitos" << endl;
        return 0;
    }

    cout << "Valores nao aceitos" << endl;
    return -1;
}

int main(){

    selection_test();

    return 0;
}