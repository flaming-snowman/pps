#include <bits/stdc++.h>

using namespace std;

int main()
{
	string marbles;
	cin >> marbles;
	int l = marbles.length();
	int skips=0, sevens=0, fours=0;
	for(int i = 0; i<l; i++) {
		if(marbles[i]=='7') {
			if(sevens==l/2) {
				skips++;
				fours++;
			} else {
				sevens++;
			}
		}
		else {
			if(sevens <= fours) {
				skips++;
				sevens++;
			} else if(fours==l/2) {
				skips++;
				sevens++;
			} else {
				fours++;
			}
		}
	}

	cout << skips << endl;
}

