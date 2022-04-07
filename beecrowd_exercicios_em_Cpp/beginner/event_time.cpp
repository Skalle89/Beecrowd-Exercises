#include <iostream>

using namespace std;

void show_rslt(int rslt){
    cout << rslt/3600/24 << " dia(s)" << endl;
    cout << rslt/3600%24 << " hora(s)" << endl;
    cout << rslt%3600/60 << " minuto(s)" << endl;
    cout << rslt%3600%60 << " segundo(s)" << endl;
}

int get_rslt(){

    int rslt {0};
    int d{},h{},m{},s{};
    char var[3];

    for (int i = 0 ; i < 2; i ++){
        cin >> var >> d;
        cin >> h >> var >> m >> var >> s;

        if(rslt == 0)
          rslt = (d*24 + h)*3600 + m*60 + s;

        else
          rslt = (d*24 + h)*3600 + m*60 + s - rslt;
    }


    if(rslt <= 0) rslt += 24*3600;

    return rslt;
}


int main(){

    int rslt = get_rslt();

    show_rslt(rslt);

    return 0;
}

