#include <iostream>
#include <iomanip>

using namespace std;

void mostrar_resultado(int *total, int * r, int * s, int *c){
        cout << "Total: " << *total << " cobaias" << endl;
        cout << "Total de coelhos: " << *c << endl;
        cout << "Total de ratos: " << *r << endl;
        cout << "Total de sapos: " << *s << endl;
        cout << "Percentual de coelhos: " << fixed << setprecision(2) <<  *c/(*total*1.0)*100 << " %" << endl;
        cout << "Percentual de ratos: " << fixed << setprecision(2) <<  *r/(*total*1.0)*100 << " %" << endl;
        cout << "Percentual de sapos: " << fixed << setprecision(2) <<  *s/(*total*1.0)*100 << " %" << endl;
}

void checar(int &c, int &r, int &s, char animal, int q ){

        if(animal == 'C'){
            c += q;
            return;
        }
        if(animal == 'S'){
            s += q;
            return;
        }

        r+= q;
}

void experiments(){
    int n;
    cin >> n;

    int q,total{0},c{0},r{0},s{0}; char animal;

    for (int i = 0; i < n ; i ++){

        cin >> q >> animal;
        total += q;

        checar(c,r,s,animal,q);
    }

    mostrar_resultado(&total,&r,&s,&c);
}

int main(){

    experiments();

    return 0;
}