#include <bits/stdc++.h>
     
using namespace std;
     
// Pasamos una referencia a 'arr' en O(1)
// PUEDES leer de 'arr', pero NO PUEDES modificarlo
void f1 (const vector <int>& arr) {

}

// Pasamos una referencia a 'arr' en O(1)
// PUEDES leer de 'arr' y PUEDES modificarlo
void f2 (vector <int>& arr) {
}
     
// Pasamos una copia de 'arr' en O(n)
// PUEDES leer de 'arr' y PUEDES modificarlo
// PERO estas modificando la copia de 'arr', no el 'arr' de 'main'
void f3 (vector <int> arr) {
     
}
     
int main () {
  int n = 10000;
  vector <int> arr(n);
  for (int i = 0; i < n; i++) {
    arr[i] = i;
  }
  f1(arr);
  f2(arr);
  f3(arr);
  return (0);
}
