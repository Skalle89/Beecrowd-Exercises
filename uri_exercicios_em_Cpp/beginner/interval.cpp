#include <iostream>
using namespace std;

void interval(){
    double val;
    cin >> val;

    if (val >= 0 &&  val <= 25) {
        cout << "Intervalo [0,25]\n";
        return;
    }

    if (val > 25 &&  val <= 50) {
        cout << "Intervalo (25,50]\n";
        return;
    }

    if (val > 50 &&  val <= 75){
        cout << "Intervalo (50,75]\n";
        return;
    }

    if (val > 75 &&  val <= 100){
        cout << "Intervalo (75,100]\n";
        return;
    }

    cout << "Fora de intervalo\n";

}

int main(){

    interval();

    return 0;
}
