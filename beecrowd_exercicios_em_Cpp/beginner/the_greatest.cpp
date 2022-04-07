#include <iostream>
#include <cmath>
using namespace std;

int the_greatest(int a,int b){
    return (a+b+abs(a-b))/2;
}

int main(){

    int a,b,c;

    cin >> a >> b >> c;

    cout << the_greatest(the_greatest(a,b),c) << " eh o maior" << endl;

    return 0;
}