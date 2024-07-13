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
    return 0;
}