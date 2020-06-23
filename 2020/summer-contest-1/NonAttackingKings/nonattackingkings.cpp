#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n==0) {
		cout << 1 << endl;
		return 0;
	}
	vector<int> permutation;
	char grid[n][n];
	int ans=0;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> grid[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		permutation.push_back(i); //create base permutation {0, 1,...,n-1}
	}
	do
	{
		bool work=true;
		for(int i = 1; i<n; i++) {
			if(abs(permutation[i]-permutation[i-1]) <= 1) {
				work=false;
				break;
			}
		}
		for(int i = 0; i<n; i++) {
			if(grid[i][permutation[i]]=='*') {
				work=false;
				break;
			}
		}
		if(work) ans++;
	} while (next_permutation(permutation.begin(),permutation.end()));

	cout << ans << endl;
}

