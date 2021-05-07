#include <iostream>
using namespace std;

void asc_desc(){

    int x,y;
    cin >> x >> y;

    while (x != y){
        if( x > y) cout << "Decrescente" << endl;
        else cout << "Crescente" << endl;
        cin >> x >> y;
    }
}


int main(){

    asc_desc();

    return 0;
}