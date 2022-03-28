#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    double a,b,c;

    cin >> a >> b >> c;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << a*c/2 << "\n" << "CIRCULO: " <<  3.14159*pow(c,2) << "\n";
    cout << "TRAPEZIO: " << (a+b)*c/2 << "\n" << "QUADRADO: " << b*b << "\n" << "RETANGULO: " << a*b  << endl;


    return 0;
}