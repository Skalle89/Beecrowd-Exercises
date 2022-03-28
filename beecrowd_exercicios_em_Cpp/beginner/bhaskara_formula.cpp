#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int bhaskara(){

   double a, b,c;

   cin >> a >> b >> c;

   double delta = b*b - 4*a*c;

   if (a == 0 || delta < 0){
       cout << "Impossivel calcular" << endl;
       return -1;
   }

   cout << fixed << setprecision(5) << "R1 = " << (-1*b + sqrt(delta))/(2*a) << "\n";
   cout << "R2 = " << (-1*b - sqrt(delta))/(2*a) << endl;
   return 0;
}


int main(){

    bhaskara();

    return 0;
}
