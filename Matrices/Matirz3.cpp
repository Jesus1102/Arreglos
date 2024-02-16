#include <iostream>
using namespace std;

int main(){

    int x,y;
    string Truiqui [3][3] = {};

    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++){
            cout << "Ingrese 0 o X para la posicion ["<<i<<"]"<<"["<<j<<"]"<<endl;
            cin >> Truiqui[i][j];
        }
    }
    
    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++){
            cout << Truiqui[i][j];
        }
        cout << endl;
    }

    return 0;

}
