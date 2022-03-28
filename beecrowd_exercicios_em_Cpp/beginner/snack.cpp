#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

map<int,double> criar_map(){

    map<int,double> tab {};

    double precos [] {4,4.5,5,2,1.5};

    for(int i = 1; i < 6; i ++) {
        tab.insert(pair<int,double>(i,precos[i-1]));
    }

    return tab;
}


int main(){

    map <int,double> tabela = criar_map();

    int x,y;

    cin >> x >> y;

    cout << fixed << setprecision(2) << "Total: R$ " << tabela.at(x)*y << endl;

    return 0;
}