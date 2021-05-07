#include <iostream>
#include <map>
#include <string>
using namespace std;

map <string,map<string,map<string,string>>> criar_map(map <string,map<string,map<string,string>>> animals){
        animals["vertebrado"]["ave"]["carnivoro"] = "aguia";
        animals["vertebrado"]["ave"]["onivoro"] = "pomba";
        animals["vertebrado"]["mamifero"]["onivoro"] = "homem";
        animals["vertebrado"]["mamifero"]["herbivoro"] = "vaca";
        animals["invertebrado"]["inseto"]["herbivoro"] = "lagarta";
        animals["invertebrado"]["inseto"]["hematofago"] = "pulga";
        animals["invertebrado"]["anelideo"]["hematofago"] = "sanguessuga";
        animals["invertebrado"]["anelideo"]["onivoro"] = "minhoca";

    return animals;
}


int main(){

    map <string,map<string,map<string,string>>> animals {};
    animals = criar_map(animals);

    string a,b,c;

    cin >> a >> b >> c;

    cout << animals[a][b][c] << endl;

    return 0;
}