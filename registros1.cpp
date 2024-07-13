#include <iostream>
#include <string>
using namespace std;

struct empleado {
    string nombres;
    char sexo;
    double sueldo;
};

int main() {
    int n, IMayor = 0, IMenor = 0;
    cout << "Ingrese la cantidad de empleados: "; 
    cin >> n;
    cin.ignore();
    empleado empleados[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese los datos del empleado #" << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, empleados[i].nombres);
        cout << "Sexo (m/f): "; 
        cin >> empleados[i].sexo;
        cout << "Sueldo: "; 
        cin >> empleados[i].sueldo;
        cin.ignore();

        if (empleados[i].sueldo > empleados[IMayor].sueldo) {
            IMayor = i;
        }
        if (empleados[i].sueldo < empleados[IMenor].sueldo) {
            IMenor = i;
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
