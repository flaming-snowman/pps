// My solution

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i = 0; i<n-2; i++) {
        if(s.substr(i, 3) == "FEE") {
            ans++;
        }
    }
    cout << ans << endl;
}
