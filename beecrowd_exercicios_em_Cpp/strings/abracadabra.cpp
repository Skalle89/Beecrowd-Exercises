#include <iostream>
using namespace std;

int main(){

    string word{};

    while (cin >> word){

        int len = word.size();
        string esp {};

        for(int i {0}; i < len; i++){

            if (i > 0) esp.append(" ");
            cout << esp;

            for(int j {0}; j < word.size()-1; j++){

                 cout << word.at(j) << " ";
            }

            cout << word.at(word.size()-1) << endl;
            word.pop_back();
        }
        cout << endl;

    }

    return 0;
}