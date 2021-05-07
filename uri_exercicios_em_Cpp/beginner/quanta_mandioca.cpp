#include <iostream>

using namespace std;

int main(){

    int n [] = {300,1500,600,1000,150}, val, rslt = 225;


    for(int i {0}; i < 5; i ++){
         cin >> val;
         rslt += n[i]*val;
    }

    cout << rslt << endl;

    return 0;
}