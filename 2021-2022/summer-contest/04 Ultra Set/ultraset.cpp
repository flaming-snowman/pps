// My solution

#include <bits/stdc++.h>

using namespace std;

char lookup[4][3] = {{'g', 'r', 'p'}, {'o', 's', 'd'}, {'s', 'o', 'f'}, {'1', '2', '3'}};

string complete(string c1, string c2)
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

bool ultraset(string c1, string c2, string c3, string c4)
{
	//check all pairings
	if(complete(c1, c2) == complete(c3, c4)) return true;
	if(complete(c1, c3) == complete(c2, c4)) return true;
	if(complete(c1, c4) == complete(c2, c3)) return true;
	return false;
}

int main()
{
	int n;
	cin >> n;
	string cards[n];
	for(int i = 0; i<n; i++) {
		cin >> cards[i];
	}
	int ans = 0;
	for(int i = 0; i<n-3; i++) {
		for(int j = i+1; j<n-2; j++) {
			for(int k = j+1; k<n-1; k++) {
				for(int l = k+1; l<n; l++) {
					//check all quartets
					ans += ultraset(cards[i], cards[j], cards[k], cards[l]);
					//true = 1, false = 0. C++ just be like that.
				}
			}
		}
	}
	cout << ans << '\n';
}

