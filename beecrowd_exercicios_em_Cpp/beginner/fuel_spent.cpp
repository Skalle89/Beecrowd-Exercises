#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a,b;

    cin >> a >> b;

    cout << fixed << setprecision(3) << 1/12.0*b*a<< endl;

    return 0;
}