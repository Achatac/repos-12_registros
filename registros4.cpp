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

    Atleta Atl[n];

    for (int i; i < n; i ++ ){
        cout << "Ingrese los datos del atleta #" << i + 1 << endl;
        cout << "Nombre: " << Atl[i].Nombre;
        cout << "Pais: " << Atl[i].Pais;
        cout << "Disciplina" <<Atl[i].Disciplina;
        cout << "Numero de medallas: " << Atl[i].NumMedallas;
    }

    string paiss;
    cout << "Ingrese un pais: "; cin >> paiss; 
    for (int j = 0; j < n; j++){
        if (paiss == Atl[j].Pais){
            cout << "Nombre: " << Atl[j].Nombre << ", Pais: " << Atl[j].Pais << " ,Disciplina: " << Atl[j].Disciplina << "#Medallas: " << Atl[j].NumMedallas;

        }
    }

    return 0;
}