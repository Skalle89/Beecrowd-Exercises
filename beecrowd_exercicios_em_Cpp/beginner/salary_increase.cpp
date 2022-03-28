#include <iostream>
#include <iomanip>

using namespace std;

void ajustar_salario(double sal){
    int ajuste{};

    if( 0 <= sal && sal <= 400 ){
        ajuste = 15;
        sal += sal*0.15;
    }
    else if( 400 < sal && sal <= 800 ){
        ajuste = 12;
        sal += sal*0.12;
    }
    else if( 800 < sal && sal <= 1200 ){
        ajuste = 10;
        sal += sal*0.10;
    }
    else if( 1200 < sal && sal <= 2000 ){
        ajuste = 7;
        sal += sal*0.07;
    }
    else{
        ajuste = 4;
        sal += sal*0.04;
    }


    cout << fixed << setprecision(2);
    cout << "Novo salario: " << sal << "\n";
    cout << "Reajuste ganho: " << sal*(ajuste/(ajuste+100.0)) << "\n";
    cout << "Em percentual: " << ajuste << " %"<< "\n";
}


int main(){

    double sal;

    cin >> sal;

    ajustar_salario(sal);

    return 0;
}