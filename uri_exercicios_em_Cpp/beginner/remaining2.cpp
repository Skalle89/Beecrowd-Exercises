#include <iostream>
using namespace std;

void remaining(int x){
    for(int i = 2; i < 10000; i ++)
        if(i%x == 2) cout << i << endl;

}


int main(){
    int n;
    cin >> n;

    remaining(n);
    return 0;
}