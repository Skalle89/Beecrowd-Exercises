#include <iostream>

using namespace std;

void criar_matriz(int n){
    int mtz [n][n];

    for(int i {0}; i < n; i ++)
        for(int j {0}; j < n; j ++)
            mtz[i][j] = 3;

    for(int i {0}; i < n; i ++) {
        mtz[i][i] = 1;
        mtz[i][n-i-1] = 2;
    }

    for(int i {0}; i < n; i ++) {
        for (int j{0}; j < n; j++){
            cout << mtz[i][j];
        }
        cout << endl;
    }
}

int main(){

    int n;

    while (cin >> n){

        criar_matriz(n);

    }

    return 0;
}