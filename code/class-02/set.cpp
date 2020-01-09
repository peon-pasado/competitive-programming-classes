#include <bits/stdc++.h>

using namespace std;

int main () {
  set <int> S;
  // Insertar un elemento - O(log n)
  S.insert(3);
  S.insert(4);
  S.insert(-100);
  S.insert(-345);
  // Comprobemos que los elementos son guardados en orden ascendente
  for (auto x: S) {
    cout << x << endl;
  }
  // Ver si un elemento pertenece al Set - O(log n)
  if (S.count(4) > 0) {
    cout << "4 esta en el Set\n";
  }
  // Tambien podemos usar find para esto
  if (S.find(4) != end(S)) {
    cout << "4 esta en el Set" << endl;
  }
  // Eliminar un elemento - O(log n)
  S.erase(4);
  // Tambien podemos eliminar así
  S.erase(S.find(-100));
  // Si previamente guardamos
  // auto it = S.find(val) - O(log n)
  // Luego
  // S.erase(it) - O(1)
  return (0);
}
