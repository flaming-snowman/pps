#include <bits/stdc++.h>

using namespace std;

bool hasS, hasE, hasA;
int len, ans;

void reset()
{
	//reset values to false
	hasS=false;
	hasE=false;
	hasA=false;
	if(len>0) {
		ans+=len+2; //remember to add the 2 from SE
	}
	len=0;
}

int main()
{
	int n;
	string s;
	cin >> n >> s;
	for(int i = 0; i<n; i++){
		if(s[i]=='C') {
			ans++;
			reset(); //start of new C
		}
		if(s[i]=='S') {
			reset(); //start of a new C
			hasS=true; //keep track of the A
		} 
		else if(s[i]=='E') {
			if(!hasS||hasA) reset(); //can't keep building on
			else if(!hasE) hasE=true; //keep track of the E
			else len++; //increment if we already have SE
		} 
		else if(s[i]=='A') {
			if(!hasS||!hasE) reset(); //can't keep building on
			else {
				len++; //can build on
				hasA=true; //keep track of the A
			}
		} 
		else reset(); //can't build on with other characters
	}
	reset();
	cout << ans << endl;
}
