#include <iostream>

using namespace std;

void sequence(){
    for(int j = 60, i = 1; j > -1;i += 3, j -=5)
        cout << "I="<< i <<" J=" << j << endl;

}


int main(){

    sequence();

    return 0;
}