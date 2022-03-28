#include <iostream>

using namespace std;

int * ordenar (int arr []){
    int ok {0};

    static int arr_ord [3]{};

    for(int i = 0; i < 3; i++){
       arr_ord[i] = arr[i];
    }

    while (!ok){
        ok = 1;
        for(int i = 0; i < 2; i++){
            if (arr_ord[i] > arr_ord[i + 1]){
                ok = 0;
                int temp = arr_ord[i];
                arr_ord[i] = arr_ord[i+1];
                arr_ord[i+1] = temp;
            }
        }
    }

    return arr_ord;

}

void escrever_resultado(int arr [], int arr_ord []){

   for(int i = 0; i < 3; i++){
       cout << arr_ord[i] << endl;
   }
   cout << endl;
   for(int i = 0; i < 3; i++){
       cout << arr[i] << endl;
   }

}

int main(){
    int  arr [3] {};

    for(int & i : arr){
        cin >> i;
    }

    int * arr_ord = ordenar(arr);

    escrever_resultado(arr,arr_ord);

    return 0;
}