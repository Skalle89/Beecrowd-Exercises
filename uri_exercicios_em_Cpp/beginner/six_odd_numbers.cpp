#include <iostream>
using namespace std;

void get_odd_numbers(int n){
    if (n%2 == 0) n++;

    for(int i = n; i < n+12; i +=2)
        cout << i << endl;
}

int main(){
    int n;

    cin >> n;

    get_odd_numbers(n);

    return 0;
}