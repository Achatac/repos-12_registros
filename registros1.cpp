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


    int n;
    cout << "Ingrese la cantidad de empleados: "; cin >> n;
    empleado empleados[n];
    for (int i = 0; i < n; i ++){
        cout << "Ingrese el nombre del empleado " << i + 1 << " : "; cin >> empleados[i].nombres;
        cout << "Ingrese el sexo del empleado " << i + 1 << " : "; cin >> empleados[i].sexo;
        cout << "Ingrese el sueldo del empleado " << i + 1 << " : "; cin >> empleados[i].sueldo;
    }
    for (int j = 0; j < n, j++){
        if ()
    }
    }
    return 0;
}