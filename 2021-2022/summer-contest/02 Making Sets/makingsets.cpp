// My Solution

#include <bits/stdc++.h>

using namespace std;

char lookup[4][3] = {{'g', 'r', 'p'}, {'o', 's', 'd'}, {'s', 'o', 'f'}, {'1', '2', '3'}};

string solve(string c1, string c2)
{
	string c3 = "";
	for(int i = 0; i<4; i++) {
		if(c1[i] == c2[i]) {
			c3 += c1[i];
		} else {
			int x = 0;
			for(int j = 0; j<3; j++) {
				if(c1[i] == lookup[i][j]) {
					x += j;
				}
				if(c2[i] == lookup[i][j]) {
					x += j;
				}
			}
			c3 += lookup[i][3-x];
		}
	}
	return c3;
}

int main()
{
	int n;
	cin >> n;
	string c1, c2;
	for(int i = 0; i<n; i++) {
		cin >> c1 >> c2;
		cout << solve(c1, c2) << "\n";
	}
}

