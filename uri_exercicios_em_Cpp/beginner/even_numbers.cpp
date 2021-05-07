#include <iostream>

using namespace std;

int ap (int n = 2){
    if(n == 100) {
        cout << n << endl;
        return 0;
    }
    cout << n << endl;
    return ap (n+2);
}

int main(){

    ap();

    return 0;
}