#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int n,m;

    cin >> n >> m;

    for(int i = 0; i < m; i ++){
        char acao [7];
        cin >> acao;
        if(strcmp(acao,"fechou") == 0) n ++;
        else n --;
    }

    cout << n << endl;

    return 0;
}