#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;

    cin >> n;

    double a,b,c;

    for (int i = 0 ; i < n;i ++){
        cin >> a >> b >> c;
        cout << fixed << setprecision(1) << (a*2 + b*3 + c*5)/10 << endl;
    }



    return 0;
}