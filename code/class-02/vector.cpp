#include <bits/stdc++.h>

using namespace std;

int main () {
  vector <int> arr;
  // Agregar un elemento al final - O(1)
  arr.push_back(123);
  arr.push_back(987);
  arr.push_back(343);
  arr.push_back(134);
  arr.push_back(345);
  // Quitar un elemento del final - O(1)
  arr.pop_back();
  // Agregar un elemento en la posición `i` - O(n)
  int i = 2;
  arr.insert(begin(arr) + i, 234);
  // Eliminar un elemento de la posición `i` - O(n)
  i = 1;
  arr.erase(begin(arr) + i);
  // Copiar el vector - O(n)
  vector <int> arrCopy = arr;
  // Para iterar el arr podemos hacerlo asi:
  for (int arr_i: arr) ;
  // O también así
  // arr.size() nos retorna la cantidad de elementos - O(1)
  for (int i = 0; i < arr.size(); i++) ;
  // Si queremos eliminar todos los elementos - O(n)
  arr.clear();
  return (0);
}
