#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll comb (int n, int m) {
  if (m == 0) return 1;
  if (n == m) return 1;
  return comb(n - 1, m - 1) + comb(n - 1, m);
}

int main () {
  cout << comb(4, 2) << '\n';
  return (0);
}
