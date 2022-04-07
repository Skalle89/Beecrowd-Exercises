#include <iostream>

using namespace std;

int main(){
    double pos{}, inp;

    for(int i = 0; i < 6; i++){
        cin >> inp;
        if(inp > 0) pos ++;
    }

    cout << pos << " valores positivos" <<  endl;
    return 0;
}