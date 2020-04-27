#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

long long fibonacci(int numero){
    if (numero <= 1){ 
        return numero;
    }
    return fibonacci(numero-1) + fibonacci(numero-2);
}

long long fibonacciIterativa(int numero){
   long long penultimo = 0;
   long long ultimo = 1;
   long long fibonacci = numero;
   
   for (int i = 2; i <= numero; i++) {
      fibonacci = ultimo + penultimo;
      penultimo = ultimo;
      ultimo = fibonacci;
   }
   return fibonacci;
}


int main () {
   int dato;
   long long resultado;

   cout << endl << "VERSION RECURSIVA MALA:";
   cout << endl << "========================" << endl;

   for (dato = 0; dato <= 50; dato++) {
      resultado = fibonacci(dato);
      cout << "Fibonacci(" << dato << ") = " << resultado << endl;
   }

   cout << endl << "VERSION ITERATIVA BUENA:";
   cout << endl << "========================" << endl;

   for (dato = 0; dato <= 50; dato++) {
      resultado = fibonacciIterativa(dato);
      cout << "Fibonacci(" << dato << ") = " << resultado << endl;
   }

}