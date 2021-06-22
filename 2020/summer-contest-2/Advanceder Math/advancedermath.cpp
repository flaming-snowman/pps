// Modified solution originally by Jack Chang

#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long n, m, ans = 0, sums[7000];

int main() {
  cin >> n >> m;
  long long cSum = 0, curr;
  for(int i = 0; i <= 6208; i++) {
    curr = pow(i, m);
    curr %= MOD;
    cSum += curr;
    cSum %= MOD;
    sums[i] = cSum;
  }
  int cur;
  for(int i = 0; i < n; i++) {
    cin >> cur;
    ans += sums[cur];
    ans %= MOD;
  }
  cout << ans << "\n";
}
