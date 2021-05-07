#include <iostream>

using namespace std;

int main(){
    int val,pos{},neg{},even{},odd{};

    for(int x = 0 ; x < 5 ; x ++){
        cin >> val;

        if(val%2 == 0) even++;
        else odd++;
        if(val > 0) pos++;
        else if (val < 0) neg++;
    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}