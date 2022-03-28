#include <iostream>

using namespace std;

void mult_table(int n){
        for(int i = 1; i < 11; i ++)
            cout <<  i << " x " << n << " = " << i*n << endl;
}

int main(){
    int n;
    cin >> n;
    mult_table(n);
    return 0;
}
