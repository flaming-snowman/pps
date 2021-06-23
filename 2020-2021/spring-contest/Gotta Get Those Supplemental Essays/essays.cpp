#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	vector<bool> essays; // bool represents whether assignment needs to be done
	vector<int> classes[N+1]; // assignment numbers for each class
	int num = 0; // number of essays left
	int t, x; // type and number
	int firstx = 0; // how many of the first k assignments are already done
	int a = 0; // assignment number
	for (int i = 0; i < K; i++) {
		cin >> t >> x;
		if (t == 1) {
			essays.push_back(true);
			classes[x].push_back(a++);
			num++;
		} else if (t == 2) {
			for (int k: classes[x]) {
				if(essays[k]) {
					num--;
					essays[k] = false;
				}
			}
			classes[x].clear();
		} else if (t == 3) {
			if(x > firstx) {
				for(int k = firstx; k < x; k++) {
					if(essays[k]) {
						num--;
						essays[k] = false;
					}
				}
				firstx = x;
			}
		}
		cout << num << "\n";
	}
	for(int k: classes[N]) {
		if(essays[k]) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}

