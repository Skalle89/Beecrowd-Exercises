#include <iostream>

using namespace std;

void banknotes(){

    int cash, notes [] {100,50,20,10,5,2,1};

    cin >> cash;

    cout << cash << endl;

    for(auto c : notes){
        cout << cash/c << " nota(s) de R$ "<< c <<",00"<< endl;
        cash %= c;
    }

}

int main(){

    banknotes();

    return 0;
}