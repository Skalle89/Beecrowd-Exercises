#include <iostream>

using namespace std;

void ordenar(double arr_ord []){

    int ok {0};

     while (!ok){
        ok = 1;
        for(int i = 0; i < 2; i++){
            if (arr_ord[i] < arr_ord[i + 1]){
                ok = 0;
                double temp = arr_ord[i];
                arr_ord[i] = arr_ord[i+1];
                arr_ord[i+1] = temp;
            }
        }
    }

}

void triangle_types() {
    double sides[3];

    for (int i = 0; i < 3; i++) cin >> sides[i];

    ordenar(sides);

    if(sides[0] < sides[1]+sides[2] && sides[1] < sides[0]+sides[2] && sides[2] < sides[0]+sides[1]){

        if (sides[0] * sides[0] == sides[1] * sides[1] + sides[2] * sides[2]) {
            cout << "TRIANGULO RETANGULO\n";
            }

        if (sides[0] * sides[0] > sides[1] * sides[1] + sides[2] * sides[2]) {
            cout << "TRIANGULO OBTUSANGULO\n";
            }

        if (sides[0] * sides[0] < sides[1] * sides[1] + sides[2] * sides[2]) {
            cout << "TRIANGULO ACUTANGULO\n";
            }

        if (sides[0] == sides[1] && sides[0] == sides[2] && sides[1] == sides[2]) {
            cout << "TRIANGULO EQUILATERO\n";
            }

        if (sides[0] == sides[1] and sides[1] != sides[2] || sides[1] == sides[2] and sides[0] != sides[2]
        || sides[2] == sides[0] and sides[1] != sides[0]) {
            cout << "TRIANGULO ISOSCELES\n";
            }
        return;
    }
    cout << "NAO FORMA TRIANGULO\n";

}

int main(){

    triangle_types();

    return 0;
}