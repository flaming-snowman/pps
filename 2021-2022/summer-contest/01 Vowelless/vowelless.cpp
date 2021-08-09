// My solution

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(char c: s) {
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			n--;
		}
	}
	cout << n << '\n';
}

