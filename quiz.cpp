#include <iostream>
using namespace std;

int main(){
/*crear 2 vectores de n cantidad que el usuario diligencie, sumar los datos de cada vector y decir si la suma de ambos son iguales o diferentes*/
/*Crear un vector de n posiciones simulando buscaminas*/
    int j,k,h, suma1 = 0, suma2 = 0, CantM = 0;
    cout << "Ingrese la cantidad de datos del primer vector: " << endl;
    cin >> j;

    int Vector1 [j] = {};
    
    for (int i = 0; i < j; i++){

        cout << "Ingrese el dato: " << endl;
        cin >> Vector1[i];
        suma1 += Vector1[i];

    }

    cout << "Ingrese la cantidad de datos del segundo vector: " << endl;
    cin >> k;
    int Vector2 [k] = {};
    for (int i = 0; i < k; i++){

        cout << "Ingrese el dato: " << endl;
        cin >> Vector2[i];
        suma2 +=  Vector2[i];

    }

    cout << suma1 << endl;
    cout << suma2 << endl;

    if(suma1 == suma2){

        cout << "La suma de los datos de los arreglos es igual" << endl;
    
    }
    else{
        
        cout << "La suma de los datos de los arreglos es diferente" << endl;
        
    }

    cout << "Ingrese la cantidad de posiciones que desea" << endl;
    cin >> h;

    int Buscaminas [h] = {};

    for (int i = 0; i < h; i++){

        cout << "Ingrese 1. para minas " << endl;
        cout << "Ingrese 0. para NO minas " << endl;
        cin >> Buscaminas[i];
        
        if(Buscaminas[i] == 1){
            CantM = CantM + 1;
        }
    
    }

    cout << "La cantidad de minas encontradas es: " << CantM  << endl;


   return 0;

}