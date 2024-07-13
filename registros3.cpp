#include <iostream>
#include <string>

using namespace std;

int main() {
    struct Persona {
        string Nombre;
        int DiaN;
        int MesN;
        int AnioN;
    };

    int n;
    cout << "Ingrese la cantidad de personas: ";
    cin >> n;
    cin.ignore();

    Persona pers[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese los datos de la persona #" << i + 1 << endl;
        cout << "Nombres: ";
        getline(cin, pers[i].Nombre);
        cout << "Dia de Nacimiento: ";
        cin >> pers[i].DiaN;
        cout << "Mes de Nacimiento: ";
        cin >> pers[i].MesN;
        cout << "Anio de Nacimiento: ";
        cin >> pers[i].AnioN;
        cin.ignore();
    }

    int mes;
    do {
        cout << "Ingrese un numero de mes (0 para salir): ";
        cin >> mes;
        if (mes == 0) {
            break;
        }
        if (mes >= 1 && mes <= 12) {
            cout << "Las personas que cumplen anios en el mes " << mes << " :" << endl;
            bool hayMes = false;
            for (int j = 0; j < n; j++) {
                if (mes == pers[j].MesN) {
                    cout << "Nombre: " << pers[j].Nombre << ", Dia: " << pers[j].DiaN << ", Mes: " << pers[j].MesN << ", Anio: " << pers[j].AnioN << endl;
                    hayMes = true;
                }
            }
            if (!hayMes) {
                cout << "No hay personas que cumplan anios en este mes." << endl;
            }
        } else {
            cout << "Valor incorrecto. Intente de nuevo." << endl;
        }
    } while (mes != 0);

    return 0;
}