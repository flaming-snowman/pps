#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000;
long long prefix[MAXN+1][MAXN+1]; //2d prefix sum

int main()
{
	int n, k;
	cin >> n >> k;
	int prize;
	for(int i = 1; i<=n; i++) {
		for(int j = 1; j<=n; j++) {
			cin >> prize;
			prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+prize;
		}
	}
	long long ans = 0;
	for(int i = k; i<=n; i++) {
		for(int j = k; j<=n; j++) {
			long long square = prefix[i][j]-prefix[i-k][j]-prefix[i][j-k]+prefix[i-k][j-k];
			ans=max(ans, square);
		}
	}

	cout << ans << endl;
}

