#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int count = 0;
	char a;
	for(int i = 0; i<N; i++) {
		cin >> a;
		if(a=='a'||a=='A') {
			count++;
		}
	}

	cout << count << endl;
}

