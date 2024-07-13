#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Atleta {
        string Nombre;
        string Pais;
        string Disciplina;
        int NumMedallas;
    };

    int n;
    cout << "Ingrese el numero de atletas: ";
    cin >> n;
    cin.ignore();
    Atleta Atl[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese los datos del atleta #" << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, Atl[i].Nombre);
        cout << "Pais: ";
        getline(cin, Atl[i].Pais);
        cout << "Disciplina: ";
        getline(cin, Atl[i].Disciplina);
        cout << "Numero de medallas: ";
        cin >> Atl[i].NumMedallas;
        cin.ignore();
    }

    string paiss;
    cout << "Ingrese un pais: ";
    getline(cin, paiss);

    bool hayAtl = false;
    int MaxMedallas = 0;
    Atleta Pmejor;

    for (int j = 0; j < n; j++) {
        if (paiss == Atl[j].Pais) {
            cout << "Nombre: " << Atl[j].Nombre << ", Pais: " << Atl[j].Pais << ", Disciplina: " << Atl[j].Disciplina << ", #Medallas: " << Atl[j].NumMedallas << endl;
            if (Atl[j].NumMedallas > MaxMedallas) {
                Pmejor = Atl[j];
                MaxMedallas = Atl[j].NumMedallas;
            }
            hayAtl = true;
        }
    }

    if (hayAtl) {
        cout << "El atleta con el mayor numero de medallas de " << paiss << " es: " << Pmejor.Nombre << " con " << Pmejor.NumMedallas << " medallas." << endl;
    } else {
        cout << "No se encontraron atletas del pais " << paiss << "." << endl;
    }

    return 0;
}
