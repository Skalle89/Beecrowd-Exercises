#include <iostream>

using namespace std;

void conversion(){

    int min;

    cin >> min;

    cout << min/3600 << ":" << min%3600/60 << ":" << min%3600%60 << endl;
}

int main(){

    conversion();

    return 0;
}