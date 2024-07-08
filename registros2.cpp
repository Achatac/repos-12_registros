//estructura persona 
#include <iostream>
#include <string>
using namespace std;
int main (){

    struct persona {
        string nombres;
        long DNI;
        int edad;
    };

    int n;
    cout << "Ingrese la cantidad de personas a registrar: "; cin >> n;

    persona infP[n];

    for (int i = 0; i < n; i++){
        cout << "Ingrese el nombre de la persona " << i + 1; cin >> infP[i].nombres;
        cout << "Ingrese el DNI de la persona" << i +1; cin >> infP[i].DNI;
        cout << "Ingrese la edad de la persona " << i +1; cin >> infP[i].edad
    }

    return 0;
}