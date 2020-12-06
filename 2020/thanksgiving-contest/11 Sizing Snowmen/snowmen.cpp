// My solution

#include <bits/stdc++.h>

using namespace std;

const int MAXR = 1e4;
set<int> lookup[MAXR+5]; //which size snowmen is a snowball of radius r part of

int main()
{
    int n,m,k,h,d,sum;
    cin >> n >> m;
    for(int i = 0; i<n; i++) {
        cin >> k;
        int r[k];
        sum=0;
        for(int j = 0; j<k; j++) {
            cin >> r[j];
            sum+=r[j];
        }
        for(int j = 0; j<k; j++) {
            lookup[r[j]].insert(2*sum); //double for total height
        }
    }
    for(int i = 0; i<m; i++) {
        cin >> h >> d;
        if(d%2==1 || h%2==1) { //diameters and heights can't be odd
            cout << "NO" << endl;
            continue;
        }
        if(d/2 > MAXR) { //outside of constraints
            cout << "NO" << endl;
        }
        else if(lookup[d/2].count(h)) { //efficient lookup using set
			cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
