#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e6 + 10, MAX=1e9;
int dp[N];

int main() {
    int n, x;
    cin >> x >> n;
    int coins[n];
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    for(int i = 1; i <= x; i++) {
        dp[i] = MAX;
    }
    dp[0] = 0;
    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < n; j++) {
            if(i-coins[j] >= 0) dp[i] = min(dp[i-coins[j]] + 1 , dp[i]);
        }
    }
    cout << (dp[x] >= MAX ? -1 : dp[x]);
    return 0;
}
