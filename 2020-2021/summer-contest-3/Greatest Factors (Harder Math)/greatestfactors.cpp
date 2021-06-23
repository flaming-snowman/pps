#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v;
	ll i;
    for(i = 1; i*i<n; i++) {
        if(n%i==0) {
            v.push_back(i);
            v.push_back(n/i);
        }
    }
	if(i*i==n) {
		v.push_back(i);
	}
    ll ans=1;
	sort(v.rbegin(), v.rend()); //sort in reverse order
	for(ll i = 0; i<m; i++) {
		v[i]%=k;
        ans*=v[i];
        ans%=k;
    }
    cout << ans << endl;
}
