#include <iostream>

using namespace std;

void sequence(){
    for(int i = 0; i < 21; i +=2){
        cout << "I="<< i/10.0 << " J="<< 1 + i/10.0<< endl;
        cout << "I="<< i/10.0 << " J="<< 2 + i/10.0<< endl;
        cout << "I="<< i/10.0 << " J="<< 3 + i/10.0<< endl;
    }
}

int main(){
    sequence();
    return 0;
}
