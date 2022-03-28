#include <iostream>
using namespace std;

int even_square(int n,int x = 2){
    if(x > n) return 0;

    cout << x << "^2 = " << x*x << endl;
    return even_square(n, x+2);
}


int main(){

    int n;
    cin >> n;
    even_square(n);
    return 0;
}