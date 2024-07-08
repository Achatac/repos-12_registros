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
        cout << "Ingrese la edad de la persona " << i +1; cin >> infP[i].edad;
    }


    int sumaE = 0, mayores50 =0 ;
    float promedio;
    for (int j = 0; j < n; j ++){
        sumaE = sumaE + infP[j];
        if (infP[j].edad > 50){
            mayores50 ++;
        }
    }

    return 0;
}