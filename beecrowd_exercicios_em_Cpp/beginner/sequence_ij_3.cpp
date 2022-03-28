#include <iostream>

using namespace std;

void sequence(){
    for(int i = 1,j = 7; i < 10 ;i += 2, j +=2){
        cout << "I="<< i << " J=" << j<< endl;
        cout << "I="<< i << " J=" << j-1 <<  endl;
        cout << "I="<< i << " J=" << j-2 << endl;
    }
}



int main(){

    sequence();

    return 0;
}