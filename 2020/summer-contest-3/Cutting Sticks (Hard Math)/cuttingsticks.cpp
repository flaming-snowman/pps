#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, stick;
	long long cuts=0;
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		cin >> stick;
		cuts+=(stick-1)/m;
	}
	cout << cuts << endl;
}

