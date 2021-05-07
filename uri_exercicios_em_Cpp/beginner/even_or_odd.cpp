#include <iostream>

using namespace std;

void even_or_odd(){
    int x,y;
    cin >> x;

    for(int i = 0; i < x; i ++){
        cin >> y;
        if (y == 0) cout << "NULL" << endl;
        else{
            cout << (y % 2 == 0 ? "EVEN ": "ODD ");
            cout << (y > 0 ? "POSITIVE" : "NEGATIVE") << endl;
        }
    }
}

int main(){

    even_or_odd();

    return 0;
}

