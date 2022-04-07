#include <iostream>

using namespace std;

void get_odd_numbers(int n){
    for(int i = 1; i <= n; i +=2)
        cout << i << endl;
}


int main(){

    int n;

    cin >> n;

    get_odd_numbers(n);

    return 0;
}