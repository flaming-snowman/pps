// Modified solution originally by Jack Chang

#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
long long n, ans = 1;

int main() {
  cin >> n;
  if (n == 0) {
      cout << "0\n";
      return 0;
  }
  long long cur;
  for(int i = 0; i<n; i++) {
    cin >> cur;
    ans = (ans * (cur % MOD)) % MOD;
  }
  if (ans < 0) ans += MOD;
  cout << ans << "\n";
  return 0;
}
