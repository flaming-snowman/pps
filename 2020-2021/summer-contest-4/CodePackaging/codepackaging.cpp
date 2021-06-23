#include <bits/stdc++.h>

using namespace std;

const int MAXX=1e6;

bool possible[MAXX];

int main()
{
	int n;
	cin >> n;
	int nums[n];
	possible[0]=true;
	int common;
	for(int i = 0; i<n; i++) {
		cin >> nums[i];
		if(i==0) common=nums[i];
		common=__gcd(common, nums[i]);
		for(int j = 0; j<MAXX-nums[i]; j++) {
			if(possible[j]) {
				possible[j+nums[i]]=true;
			}
		}
	}
	if(common>1) {
		cout << 0 << endl;
		return 0;
	}
	int ans = 0;
	for(int i = 0; i<MAXX; i++) {
		if(!possible[i]) {
			ans=i;
		}
	}

	cout << ans << endl;
}

