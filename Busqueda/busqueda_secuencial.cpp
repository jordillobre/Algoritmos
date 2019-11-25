#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int BusquedaSecuencial(vector <int> v, int dato){
        for (int i = 0; i < v.size(); i++){
            if (v[i] == dato){
                return i;
            }
        }
        return -1;
    }
    


int main()
{
    vector<int> Ejemplo1 = {10, 5, 6, 85, 47, 36, 14, 2};
    vector<int> Ejemplo2 = {16, 4, 87, 41, 36, 1, 25, 43};
    
    cout << "1.- Pos numero: " << BusquedaSecuencial(Ejemplo1, 3) << endl;
    cout << "2.- Pos numero: " << BusquedaSecuencial(Ejemplo1, 85) << endl;
    cout << "3.- Pos numero: " << BusquedaSecuencial(Ejemplo2, 2) << endl;
    cout << "4.- Pos numero: " << BusquedaSecuencial(Ejemplo2, 43) << endl;
}
