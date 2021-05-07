#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a,b;
    float c;

    cin >> a >> b >> c;

    cout << fixed << setprecision(2) <<  "NUMBER = " << a << "\n" << "SALARY = U$ " << b*c << "\n";


    return 0;
}