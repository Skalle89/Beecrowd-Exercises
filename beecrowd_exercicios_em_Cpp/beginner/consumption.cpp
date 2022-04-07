#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int x;
    double y;

    cin >> x >> y;

    cout << fixed << setprecision(3) << x*(1/y) <<" km/l\n";

    return 0;
}
