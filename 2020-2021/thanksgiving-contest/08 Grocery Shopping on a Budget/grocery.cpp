// My solution

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int travel[n];
    for(int i = 0; i<n; i++) {
        cin >> travel[i];
    }
    int grocery[n][m];
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cin >> grocery[i][j];
        }
    }
    long long cost, ans=-1;
    int items[m]; //min cost for each item
    for(int i = 1; i < (1<<n); i++) { //generate all subsets of stores
        cost=0;
        for(int j = 0; j < m; j++) {
            items[j]=-1;
        }
        for(int j = 0; j < n; j++) {
            if(i&(1<<j)) { //travel to store j?
                cost+=travel[j];
                for(int k = 0; k < m; k++) {
					//update min cost
                    if(items[k]==-1) {
                        items[k]=grocery[j][k];
                    } else {
                        items[k]=min(items[k], grocery[j][k]);
                    }
                }
            }
        }
        for(int j = 0; j<m; j++) {
            cost+=items[j];
        }
        if(ans==-1) {
            ans=cost;
        } else {
            ans=min(ans, cost);
        }
    }
    cout << ans << endl;
}


