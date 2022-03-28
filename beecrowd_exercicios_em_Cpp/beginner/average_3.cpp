#include <iostream>
#include <iomanip>

using namespace std;

int average(double  media ,bool exame = false){

    double e;

    if(!exame) cout << fixed << setprecision(1) << "Media: " << media << endl;

    if(media > 6.9 || (exame && media > 4.9)){
        cout << "Aluno aprovado.\n";
        if(exame) cout << fixed << setprecision(1) << "Media final: " << media << endl;
        return 0;
    }

    else if (media < 5.0 || (exame && media < 5.0)){
        cout << "Aluno reprovado.\n";
        if(exame) cout << fixed << setprecision(1) << "Media final: " << media << endl;
        return -1;
    }

    cout << "Aluno em exame." << endl;

    cin >> e;

    cout << "Nota do exame: " << e << endl;

    average(media = (media + e)/2,exame = true);

}

int main(){

    double a,b,c,d;

    cin >> a >> b >> c >> d;

    double media = (a*2 + b*3 + c*4 + d*1)/10;

    average(media);

    return 0;
}