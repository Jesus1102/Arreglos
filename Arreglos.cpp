#include <iostream>
using namespace std;

int main(){
    
    string Nombres[5] = {"Samuel","Jesus","Paula","Deiby","Cristian"};

    for (int i = 0; i < 5; i++){

        cout << Nombres[i] << endl;

    }

    string Nombres1 [5] = {}; 

    for (int i = 0; i < 5; i++){

        cout << "Ingrese el nombre: " << endl;
        cin >> Nombres1[i];

    }
    for (int i = 0; i < Nombres1->length(); i++){

        cout << Nombres1[i] << endl;

    }

    int j;
    cout << "Ingrese la cantidad de frutas: " << endl;
    cin >> j;

    string Frutas [j] = {};
    for (int i = 0; i < j; i++){

        cout << "Ingrese la fruta: " << endl;
        cin >> Frutas[i];

    }
    for (int i = 0; i < Frutas->length(); i++){

        cout << Frutas[i] << endl;

    }


    return 0;

}