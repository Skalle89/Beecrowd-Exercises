#include <iostream>
using namespace std;

int main(){
    int maior{-1},pos{-1},val;

    for(int i = 0; i < 100; i ++){
        cin >> val;
        if(val > maior){
            maior = val;
            pos = i + 1;
        }
    }

    cout << maior << "\n" << pos << endl;

    return 0;
}