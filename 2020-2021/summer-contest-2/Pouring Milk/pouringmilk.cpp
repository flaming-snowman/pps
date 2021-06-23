// Modified solution originally by Jack Chang

#include <bits/stdc++.h>
using namespace std;

long long n, m, ans, milk = 0;
int buckets[100000001];

int main() {
  cin >> n >> m;
  int cur;
  for(int i = 0; i<n; i++) {
    cin >> cur;
    milk += cur;
  }
  for(int i = 0; i<m; i++) cin >> buckets[i];
  sort(buckets, buckets + m);
  int c = 0;
  ans = m;
  while (c < m && buckets[c] <= milk) {
    milk -= buckets[c];
    ans--;
    c++;
  }
  cout << ans << "\n";
}
