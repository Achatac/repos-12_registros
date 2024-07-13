//repetir mes 
#include <iostream> 
#include <string>
using namespace std;
int main (){

    struct Persona {
        string Nombre;
        int DiaN;
        int MesN;
        int AnioN;
    };

    int n;
    cout << "Ingrese la cantidad de personas: "; cin >> n;

    Persona pers[n];

    for (int i = 0; i < n; i++){
        cout << "Ingrese los datos de la persona #" << i + 1 << endl;
        cout << "Nombres: "; cin >> pers[i].Nombre;
        cout << "Dia de Nacimiento: "; cin >> pers[i].DiaN;
        cout << "Mes de Nacimiento: "; cin >> pers[i].MesN;
        cout << "Anio de Nacimiento: "; cin >> pers[i].AnioN;
    }

    int mes;
    do {
        cout << "Ingrese un numero de mes: "; cin >> mes;
        if (mes > 12 || mes < 1){
            cout << "Las personas que cumplen anios en el mes " << mes << " :";
            for (int j = 0; j < n; j++ ){
                if (mes == pers[j].MesN){
                    cout << "Nombre: " << pers[j].Nombre << ", Dia: " << pers[j].DiaN << ", Mes: " << pers[j].MesN << ", Anio: " << pers[j].Anio.N;
                }
            }
        }
        else {
            cout << "valor incorrecto. Intente de nuevo.";
        }
    } while (mes != 0);

    return 0;
}