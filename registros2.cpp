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
    cin.ignore();

    persona infP[n];

    for (int i = 0; i < n; i++){
        cout << "Ingrese los datos de la persona #" << i + 1 << endl;
        cout << "Nombre: "; 
        getline (cin,infP[i].nombres);
        cout << "#DNI: "; cin >> infP[i].DNI;
        cout << "Edad: "; cin >> infP[i].edad;
        cin.ignore();
    }


    int sumaE = 0, mayores50 =0 ;
    float promedio;
    for (int j = 0; j < n; j ++){
        sumaE = sumaE + infP[j].edad;
        if (infP[j].edad > 50){
            mayores50 ++;
        }
    }

    if (mayores50 > 0){
        cout << "La cantidad de personas mayores a 50 es/son: "<< mayores50 << endl;
    } else {
        cout << "No hay personas mayores de 50 anos" << endl;
    }
    promedio = sumaE / n;
    cout << "El promedio de las edades es: " << promedio << endl;


    for (int k = 0; k < n; k ++){
        cout << "Datos de la persona #" << k +1<< " : " << endl; 
        cout << "Nombre: " << infP[k].nombres << endl;
        cout << "#DNI: " << infP[k].DNI << endl;
        cout << "Edad: " << infP[k].edad << endl;
    }
    return 0;
}