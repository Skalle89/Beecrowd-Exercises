#include <iostream>
using namespace std;

void sum_of_odds(int x, int y){
    if (x > y){
        int temp = x;x = y;y = temp;
    }

    int rslt {};

    for(int i = x+1; i < y; i++) {
        if(i%2 != 0) rslt += i;
    }

    cout << rslt << endl;
}


int main(){
    int x,y;

    cin >> x >> y;

    sum_of_odds(x,y);

    return 0;
}

