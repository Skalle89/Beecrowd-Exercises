#include <iostream>
#include <iomanip>
using namespace std;

void divisao(int x, int y){

        if (y == 0) {
            cout << "divisao impossivel" << endl;
            return;
        }

        cout << fixed << setprecision(1) << x/(y*1.0) << endl;

}

int main(){
    int n;
    cin >> n;

    for(int i {0}; i < n; i ++){
        int x,y;

        cin >> x >> y;

        divisao(x,y);
    }

    return 0;
}