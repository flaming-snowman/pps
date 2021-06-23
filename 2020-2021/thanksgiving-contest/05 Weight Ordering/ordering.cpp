// My solution

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int weights[m];
    for(int i = 0; i<m; i++) {
        cin >> weights[i];
    }
    int numItems;
    long long boxweight;
    pair<int, int> boxes[n]; //weight, box #
    for(int i = 0; i<n; i++) {
        boxweight=0;
        for(int j = 0; j<m; j++) {
            cin >> numItems;
            boxweight+=numItems*weights[j];
        }
        boxes[i]={boxweight, i+1}; //weight, position
    }
    sort(boxes, boxes+n);
    for(int i = 0; i<n; i++) {
        cout << boxes[i].second << endl;
    }
}

