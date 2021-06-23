#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin>>n>>m;
	stack<pair<char, int>> s; //char, count
	char c, cur;
	int cnt=0, ans=0;
	bool emp=false;
	for(int i = 0; i<n; i++) {
		cin >> c;
		if(emp) {
			if(!s.empty()) {
				cur=s.top().first;
				cnt=s.top().second;
				s.pop();
			} else {
				cur=c;
				cnt=0;
			}
			emp=false;
		}
		if(c==cur) {
			cnt++;
		} else {
			s.push({cur, cnt});
			cur=c;
			cnt=1;
		}
		if(cnt==m) {
			ans++;
			emp=true;
		}
	}
	cout << ans << endl;
}
