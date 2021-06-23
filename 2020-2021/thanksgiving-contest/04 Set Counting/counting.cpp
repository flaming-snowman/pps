// My solution

#include <bits/stdc++.h>

using namespace std;

bool isset(string c1, string c2, string c3) {
    for(int i = 0; i<4; i++) { //check 4 categories
        //check if all 3 cards have same property or different properties
        if(c1[i]==c2[i] && c1[i]==c3[i] && c2[i]==c3[i]) {} //do nothing if successful
        else if(c1[i]!=c2[i] && c1[i]!=c3[i] && c2[i]!=c3[i]) {}
        else return false; //fail
    }
    return true;
}

int main()
{
	int n, ans=0;
    cin >> n;
	string cards[n];
    for(int i = 0; i<n; i++) {
        cin >> cards[i];
    }
	for(int i = 0; i<n; i++) {
		for(int j = i+1; j<n; j++) {
			for(int k = j+1; k<n; k++) {
				if(isset(cards[i], cards[j], cards[k])) ans++;
			}
		}
	}

    cout << ans << endl;
}
