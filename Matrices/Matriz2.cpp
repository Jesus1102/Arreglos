#include <iostream>
using namespace std;

int main(){
    int m,n;

    cout << "Las filas de la matriz: ";
    cin >> m;

    cout << "Las columnas de la matriz: ";
    cin >> n;

    string MaquinaExp [m][n] ={};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Ingrese el nombre del producto y su precio: ";
            cin >> MaquinaExp[i][j]; 
        }
        cout << endl;
        
    }

    cout << "===============================================" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << MaquinaExp[i][j]; 
        }
        cout << endl;
    }
    
    

    return 0;
}