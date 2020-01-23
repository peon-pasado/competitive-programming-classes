#include <bits/stdc++.h>

using namespace std;

int main () {
  int n = 4;
  vector <int> arr(n);
  iota(begin(arr), end(arr), 1);
  // the array must be sorted or you won't get all the permutations
  do {
    for (int arr_i: arr) {
      cout << arr_i << ' ';
    }
    cout << '\n';
  } while (next_permutation(begin(arr), end(arr)));
  return (0);
}
