#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll s (ll num) { return num * (num + 1) / 2; }
 
ll sum (ll num, ll power = 1, ll r = 0) {
  if (num == 0) return 0;
  int d = num % 10;
  return (num / 10) * 45 * power + s(max(0, d - 1)) * power + d * (r + 1) + sum(num / 10, power * 10, r + d * power);
}
 
int main () {
  int a, b;
  while (cin >> a >> b, a != -1 and b != -1) cout << sum(b) - sum(max(0, a - 1)) << endl;
  return (0);
}