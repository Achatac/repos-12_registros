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

    return 0;
}