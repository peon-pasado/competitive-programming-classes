#include <bits/stdc++.h>

using namespace std;

int main () {
  string s;
  // lectura
  cin >> s; // así también se lee un int, long long, float, ...
  // recorrido
  for (int i = 0; i < s.size(); i++) {
    // s[i]: accede al elemento en la posicion i
    cout << s[i] << '\n'; // así también se imprime un int, long long, float, ...
  }
  s[2] = 'b'; // así se modifica el caracter en una posición
  // así podemos imprimir todo el string
  cout << s << '\n';
  s += 'a'; // así podemos agregar la letra 'a' al final del string s
  cout << s.substr(2, 2) << '\n'; // chequear que hace esto
  // la comparación es igual que con los otros tipos de datos
  if (s == "hola") cout << "ok" << '\n';
  return (0);
}
