#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void distance(){

    double a,b,c,d;

    cin >> a >> b >>c >> d;

    cout << fixed << setprecision(4) << sqrt(pow(a-c,2) + pow(b-d,2)) << endl;

}


int main(){

    distance();

    return 0;
}
