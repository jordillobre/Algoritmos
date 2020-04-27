#include <iostream>
#include <vector>

using namespace std;

int contarElementosComunesVectores(vector<float> array1, vector<float> array2){
    int pos1 = 0;
    int pos2 = 0;
    int comunes = 0;
    
    while(array1.size()>pos1 && array2.size()>pos2){
        if (array1[pos1] == array2[pos2]){
            pos2++;
            pos1++;
            comunes++;
        }
        else if(array2[pos2] > array1[pos1]){
            pos1++;
        }else{
            pos2++;
        }
    }
    return comunes;
}


int main () {
   vector<float> ejemplo1 = {10, 15, 20, 33.3, 40, 45, 50, 66.6, 70, 80, 90},
                 ejemplo2 = {11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7};

   cout << contarElementosComunesVectores(ejemplo1, ejemplo2) << endl;
      
}