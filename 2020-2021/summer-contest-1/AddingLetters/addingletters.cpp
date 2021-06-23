//Modified submission originally by Nick Song

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	string s;
	cin >> s;
	int tot=0;
	for(char c:s) {
		if(isdigit(c)) {
			int x;
            stringstream ss; //convert char to int
            ss << c;
            ss >> x;
            tot += x;
            tot+=26;
            tot+=M;
		} else {
			tot+=tolower(c)-'a';
			tot+=M;
		}
	}
	cout << tot << endl;
}

