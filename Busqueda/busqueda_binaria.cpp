#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int BusquedaBinaria (vector<int> array, int numero){
    int inicio = 0;
    int fin = array.size();
    
    while (inicio<=fin){
        int medio = (inicio + fin)  / 2;
        if(array[medio] > numero){
            fin = medio - 1;
        }
        else if(array[medio] < numero){
            inicio = medio + 1;
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
    
    cout << "1.- Pos numero: " << BusquedaBinaria(Ejemplo1, 3) << endl;
    cout << "2.- Pos numero: " << BusquedaBinaria(Ejemplo1, 85) << endl;
    cout << "3.- Pos numero: " << BusquedaBinaria(Ejemplo2, 2) << endl;
    cout << "4.- Pos numero: " << BusquedaBinaria(Ejemplo2, 43) << endl;
}
