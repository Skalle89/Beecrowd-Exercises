#include <iostream>
#include <iomanip>

using namespace std;

int banknotes_and_coins(){

    double moolah;

    cin >> moolah;

    int notas = static_cast<int>(moolah);
    int moedas = static_cast<int>((moolah - notas)*100);

//    cout << notas <<"\n"<< moedas << endl;

//    int notas;
//    double moedas;
//
//    cin >> notas >> moedas;
//    int moedas2 = static_cast<int>(moedas*100);

    int notes [] {100,50,20,10,5,2};
    int coins [] {100,50,25,10,5,1};

    cout << "NOTAS:" << endl;
    for(auto n: notes){
        cout << notas/n << " nota(s) de R$ " << n << ".00" << endl;
        notas %= n;
    }

    moedas += notas*100;

    cout << "MOEDAS:" << endl;
    for(auto c: coins){
        cout << moedas/c << " moeda(s) de R$ " << fixed << setprecision(2) << c/100.0 << endl;
        moedas %= c;
    }

    return 0;
}

int main(){

    banknotes_and_coins();

    return 0;
}