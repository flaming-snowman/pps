// My solution

#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i<n; i++)

int main() {
    int n,k;
    cin >> n >> k;
    int iq[n];
    rep(i, n) {
        cin >> iq[i];
    }
    sort(iq, iq+n);
    int a = 0, b = n-1; // parse from ends
    int teams = 0;
    while(a < b) {
        if(iq[b] >= k) {
            teams++; //one person team
            b--;
        } else if(iq[a] + iq[b] >= k) {
            teams++; //two person team
            a++;
            b--;
        } else {
            a++;
        }
    }
    cout << teams << '\n';
}

