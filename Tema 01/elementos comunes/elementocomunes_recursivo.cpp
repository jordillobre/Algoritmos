#include <iostream>
#include <vector>

using namespace std;

int contarElementosComunesVectores(const vector<float> & array1, const vector<float> & array2, int pos1, int pos2) {

   if (pos1 >= array1.size() || pos2 >= array2.size())
      return 0;

   if (array1[pos1] == array2[pos2])
      return 1 + contarElementosComunesVectores(array1, array2, pos1 + 1, pos2 + 1);

   if (array1[pos1] < array2[pos2])
      return contarElementosComunesVectores(array1, array2, pos1 + 1, pos2);

   return contarElementosComunesVectores(array1, array2, pos1, pos2 + 1);

}

int contarElementosComunesVectores(const vector<float> & array1, const vector<float> & array2) {

   return contarElementosComunesVectores(array1, array2, 0, 0);

}

int main () {
   vector<float> ejemplo1 = {10, 15, 20, 33.3, 40, 45, 50, 66.6, 70, 80, 90},
                 ejemplo2 = {11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7};

   cout << contarElementosComunesVectores(ejemplo1, ejemplo2) << endl;

}
