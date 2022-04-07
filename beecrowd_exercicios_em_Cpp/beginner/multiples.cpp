#include <iostream>

using namespace std;

int multiples(){

   int a,b;
   cin >> a >> b;

   if(a%b == 0 || b%a == 0){
       cout << "Sao Multiplos";
       return 0;
   }

   cout << "Nao sao Multiplos";
   return -1;

}

int main(){

    multiples();

    return 0;
}