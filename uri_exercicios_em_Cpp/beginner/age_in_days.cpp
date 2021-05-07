#include <iostream>
using namespace std;

int age_in_days(){

    int dias;

    cin >> dias;

    cout << dias/365 << " ano(s)\n"<< dias%365/30 << " mes(es)\n"<< dias%365%30 << " dia(s)"<< endl;
    return 0;
}


int main(){

    age_in_days();

    return 0;
}