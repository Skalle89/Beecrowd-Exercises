#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double r;

    cin >> r;

    cout << fixed << setprecision(3) << "VOLUME = " <<  3.14159*4/3.0*r*r*r << endl;

    return 0;
}