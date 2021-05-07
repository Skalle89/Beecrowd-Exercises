#include <iostream>
using namespace std;

void check_month(int val){
    char month[12][12] = {"January","February","March","April","May","June","July","August",
    "September","October","November","December"};

    cout << month[val-1] << endl;
}

int  main(){

    int val;

    cin >> val;

    check_month(val);

    return 0;
}