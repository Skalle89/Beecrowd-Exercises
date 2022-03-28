#include <iostream>

using namespace std;

void checar(int &x, int &y){
      if (x > y){
        int temp = x;
        x = y;
        y = temp;
    }

}

int rslt(int x, int y){

    int rslt{0};

    checar(x , y);

    for(int i = x+1; i < y; i++){
        if(i%2 != 0) rslt += i;
    }

    return rslt;

}

void sum_of(int n){

    int x {}, y{};

    for(int i = 0; i < n; i ++) {
        cin  >> x >> y;
        cout << rslt(x,y) << endl;
    }
}

int main(){

    int n;

    cin >> n;

    sum_of(n);

    return 0;
}