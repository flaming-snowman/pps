// Jack Chang's solution

#include <bits/stdc++.h>

using namespace std;

bool h = false;
int n, a[1000001], e[1000001], f = -1, ph = -1, ans = -1;
string str;

int main() {
  cin >> n >> str;
  int cA = 0, cE = 0;
  for(int i = 0; i<n; i++) {
    if (f == -1 && str[i] == 'F') f = i;
    if (ph == -1 && str[i] == 'P') h = true;
    else if (ph == -1 && h && str[i] == 'H') ph = i;
    if (str[i] == 'A') cA++;
    else if (str[i] == 'E') cE++;
    a[i] = cA;
    e[i] = cE;
  }
  if (ph != -1) {
    for (int i = ph + 1; i < n; i++) {
      ans = max(ans, e[n - 1] - e[ph] + 2);
      if (e[i] - e[ph] > 0) ans = max(ans, e[i] - e[ph] + a[n - 1] - a[i] + 2);
    }
    if (ans < 4) ans = -1;
  }
  if (f != -1) {
    for (int i = f + 1; i < n; i++) {
      ans = max(ans, e[n - 1] - e[f] + 1);
      if (e[i] - e[f] > 0) ans = max(ans, e[i] - e[f] + a[n - 1] - a[i] + 1);
    }
    if (ans < 3) ans = -1;
  }
  cout << ans;
}
