#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int BusquedaBinaria (vector<int> array, int numero, int inicio, int final){
    if (inicio <= final) {
        int medio = (inicio + final)  / 2;
        if(array[medio] > numero){
            return BusquedaBinaria(array, numero, inicio, medio - 1 );
        }
        else if(array[medio] < numero){
            return BusquedaBinaria(array, numero, medio + 1 , final);
        }
        else{
            return medio;
        }
    }
    return -1;
}

int main()
{
    vector<int> Ejemplo1 = {2, 5, 5, 10, 14, 36, 47, 85};
    vector<int> Ejemplo2 = {1, 4, 16, 25, 36, 41, 43, 87};
    
    cout << "1.- Pos numero: " << BusquedaBinaria(Ejemplo1, 3, 0, Ejemplo1.size() - 1) << endl;
    cout << "2.- Pos numero: " << BusquedaBinaria(Ejemplo1, 85, 0, Ejemplo1.size() - 1) << endl;
    cout << "3.- Pos numero: " << BusquedaBinaria(Ejemplo2, 2, 0, Ejemplo1.size() - 1) << endl;
    cout << "4.- Pos numero: " << BusquedaBinaria(Ejemplo2, 43, 0, Ejemplo1.size() - 1) << endl;
}
