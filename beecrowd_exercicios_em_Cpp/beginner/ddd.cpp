#include <iostream>
#include <map>


using namespace std;

void buscar_ddd(int n){
    int ddd [] {61,71,11,21,32,19,27,31};
    string dest [] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro",
                      "Juiz de Fora","Campinas", "Vitoria","Belo Horizonte"};

    for(int i = 0; i < 8; i ++) {
        if (n == ddd[i]){
            cout << dest[i] << endl;
            return;
        }
    }
    cout << "DDD nao cadastrado" << endl;
}

int main(){

    int n;
    cin >> n;

    buscar_ddd(n);

    return 0;
}