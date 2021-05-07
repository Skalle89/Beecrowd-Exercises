#include <iostream>

using namespace std;

void sequence(){
    for(int i = 1; i < 10 ;i += 2){
        cout << "I="<< i << " J=7" << endl;
        cout << "I="<< i << " J=6" << endl;
        cout << "I="<< i << " J=5" << endl;
    }
}



int main(){

    sequence();

    return 0;
}