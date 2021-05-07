#include <iostream>
using namespace std;

void check(int &m, int &n){

    if (m > n ){
        int temp = m;
        m = n;
        n = temp;
    }
}

int seq_sum(int m, int n){

    int rslt {};

    check(m,n);

    for(int i = m; i < n+1; i++){
        cout << i << " ";
        rslt += i;
    }

    return rslt;
}

int main(){

    int m{},n{};

    cin >> m >> n;

    while (m > 0 && n > 0){

        int rslt = seq_sum(m,n);

        cout << "Sum=" << rslt << endl;

        cin >> m >> n;
    }


    return 0;
}