//gestor de informacion 
#include <iostream>
#include <string>
using namespace std;
int main (){

    struct Atleta {
        string Nombre;
        string Pais;
        string Disciplina;
        int NumMedallas
    };

    int n;
    cout << "Ingrese el numero de atletas: "; cin >> n;

    Atleta Alt[n];

    for (int i; i < n; i ++ ){
        cout << "Ingrese los datos del atleta #" << i + 1 << endl;
        cout << "Nombre: " << Alt[i].Nombre;
        cout << "Pais: " << Alt[i].Pais;
        cout << "Disciplina" << Alt[i].Disciplina;
    }


    return 0;
}