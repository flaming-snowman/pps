#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, count=0;
    string s;
    cin >> N >> s;
	for(int i = 0; i<N; i++) {
		if(s[i]=='C') {
			count++;
		}
	}
    cout << count << endl;
}
