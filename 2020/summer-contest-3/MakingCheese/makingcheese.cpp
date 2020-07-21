#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(ll inc, ll req, ll need) //"cheese mod" incrementer, cheese requirement, cheese needed
{
    //binary search
    ll hi = need;
    ll lo = 0;
    while(lo < hi) {
        ll m = lo+(hi-lo)/2;
        ll cheeselo=req-req%inc+inc; //floor of req/inc + inc
        ll cheesehi=m-m%inc; //floor of m/inc (max amount of cheese to add)
        ll amt=(cheesehi-cheeselo)/inc+1; //number of values of cheese
        if(amt<0) amt=0;
        ll cheese=amt*(cheeselo+cheesehi)/2; //arithmetic series
        cheese+=m; //add initial value
        if(cheese >= need) hi = m;
        else lo = m+1;
    }
    return lo;
}

int main()
{
	int n;
    cin >> n;
    ll k,m,x;
    for(int i = 0; i<n; i++) {
        cin >> k >> m >> x;
        cout << solve(k, m, x) << endl;
    }
}


