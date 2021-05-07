#include <iostream>
#include <iomanip>
using namespace std;

void triangulo(){
    float a,b,c;

    cin >> a >> b >> c;

    if(a < b+c && b < a+c && c < a+b){
        cout << fixed << setprecision(1) << "Perimetro = " << a+b+c << endl;
        return;
    }

    cout << fixed << setprecision(1) << "Area = " << (a+b)*c/2 << endl;
}


int main(){

    triangulo();

    return 0;
}