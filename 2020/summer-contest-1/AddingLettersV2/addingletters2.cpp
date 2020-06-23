//Modified submission originally by Nick Song

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M, K;
	cin >> N >> M >> K;
	string s;
	cin >> s;
	long long tot=0;
	for(char c:s) {
		if(isdigit(c)) {
			int x;
            stringstream ss; //convert char to int
            ss << c;
            ss >> x;
            tot += x*K;
            tot+=26*K;
            tot+=M;
		} else {
			tot+=K*(tolower(c)-'a');
			tot+=M;
		}
	}
	cout << tot << endl;
}

