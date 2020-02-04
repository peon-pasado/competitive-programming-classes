#include <bits/stdc++.h>

using namespace std;

void print (const vector <int>& arr) {
  cout << "{";
  bool first = true;
  for (int elem: arr) {
    if (!first) {
      cout << ", ";
    }
    cout << elem;
    first = false;
  }
  cout << "}\n";
}

// variables globales
vector <int> subset;
int n;

void backtrack () {
  print(subset);
  int ax = 0;
  if (!subset.empty()) {
    ax = subset.back();
  }
  for (int ay = ax + 1; ay <= n; ay++) {
    // agrega ay
    subset.push_back(ay);
    backtrack();
    // elimina ay
    subset.pop_back();
  }
}

int main () {
  n = 3;
  backtrack();
}
