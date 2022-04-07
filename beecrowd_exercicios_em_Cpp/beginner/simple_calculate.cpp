#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double vals[3] {}, total {};

    for(int i = 0; i < 2; i++) {
        for (double &val : vals) {
            cin >> val;
        }

        total += vals[1]*vals[2];
    }

    cout << "VALOR A PAGAR: R$ "<< fixed << setprecision(2) << total <<"\n";

    return 0;
}