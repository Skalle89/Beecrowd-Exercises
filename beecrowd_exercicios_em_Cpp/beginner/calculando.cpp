#include <iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    for(int i = 0; i < n; i ++){

        string operacao;

        cin >> operacao;

        int rslt = operacao.at(1) - '0';

        for(int j = 1; j < operacao.size(); j +=2){

        }

        cout << "Teste "<< rslt << endl;
    }

    return 0;
}