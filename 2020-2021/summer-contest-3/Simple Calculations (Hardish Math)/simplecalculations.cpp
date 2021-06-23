#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int n;
	cin >> n;
	int nums[n];
	char op[n-1];
	for(int i = 0; i<n; i++){
		cin >> nums[i];
	}
	for(int i = 0; i<n-1; i++) {
		cin >> op[i];
	}
	ll ans=nums[0];
	for(int i = 0; i<n-1; i++) {
		if(op[i]=='+') ans+=nums[i+1];
		else if (op[i]=='-') ans-=nums[i+1];
		else if (op[i]=='*') ans*=nums[i+1];
		else if (op[i]=='/') ans/=nums[i+1];
		else if (op[i]=='%') {
			ans%=nums[i+1];
			if(ans<0) ans+=nums[i+1]; //make sure remainder is positive
		}
		else ans=pow(ans, nums[i+1]);
	}
	cout << ans << endl;
}

