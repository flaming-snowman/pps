// My solution

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    long long p,t,k;
    cin >> p >> t >> k;
    long long prefix[n+1]; //prefix sums for box weights
    prefix[0]=0;
    long long box;
    for(int i = 0; i<n; i++) {
        cin >> box;
        prefix[i+1]=prefix[i]+box;
    }
    long long boxes; //weight of boxes in range
    long long lift;
    int x,y,z;
    for(int i = 0; i<m; i++) {
        cin >> x >> y >> z;
        boxes=prefix[y]-prefix[x-1]; //use prefix sums to find sum of weights in range
        lift = p-(z/t)*k; //calculate how much mover can lift after z time
        if(lift >= boxes) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}


