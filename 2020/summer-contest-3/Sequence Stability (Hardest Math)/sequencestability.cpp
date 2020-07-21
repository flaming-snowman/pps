//Intended solution by Elden Ren

#include <bits/stdc++.h>
using namespace std;

long long dp[100005][505];
long long dp1[1000005];
long long A[100005];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    dp1[0] = 0;
    for (int i = 1; i <= n; i++) {
        long long lo = A[i-1];
        long long hi = A[i-1];
        for (int j = 0; j < min(i, m); j++) {
            lo = min(lo, A[i-1-j]);
            hi = max(hi, A[i-1-j]);
            dp[i][j] = dp1[i-j-1]+hi-lo;
            dp1[i] = max(dp1[i], dp[i][j]);
        }
    }
    cout << dp1[n];
    return 0;
}
