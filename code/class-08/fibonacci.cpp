#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fib (int n) {
  if (n <= 1) return n;
  return fib(n - 1) + fib(n - 2);
}

int main () {
  int n = 40;
  cout << fib(n) << '\n';
  return (0);
}
