//datos del empleado 
#include <iostream>
#include <string>
using namespace std;
int main (){

    struct empleado {
        string nombres;
        char sexo;
        double sueldo;
    };

    int n, IMayor = 0, IMenor = 0;
    cout << "Ingrese la cantidad de empleados: "; cin >> n;
    empleado empleados[n];
    for (int i = 0; i < n; i ++){
        cout << "Ingrese el nombre del empleado " << i + 1 << " : "; cin >> empleados[i].nombres;
        cout << "Ingrese el sexo del empleado (m/f)" << i + 1 << " : "; cin >> empleados[i].sexo;
        cout << "Ingrese el sueldo del empleado " << i + 1 << " : "; cin >> empleados[i].sueldo;
    }
    for (int j = 0; j < n; j++){
        if (empleados[j].sueldo > empleados[IMayor].sueldo){
            IMayor = j;
        }
        if (empleados[j].sueldo > empleados[IMenor].sueldo){
            IMenor = j;
        }
    }

    cout << "El empleado con mayor salario:" << endl;
    cout << "Nombre: " << empleados[IMayor].nombres << endl;
    cout << "Sexo: " << empleados[IMayor].sexo << endl;
    cout << "Sueldo: " << empleados[IMayor].sueldo << endl;

    cout << "El empleado con menor salario:" << endl;
    cout << "Nombre: " << empleados[IMenor].nombres << endl;
    cout << "Sexo: " << empleados[IMenor].sexo << endl;
    cout << "Sueldo: " << empleados[IMenor].sueldo << endl;

    return 0;
}