#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if(n==0) {
        cout << 0 << endl;
        return 0;
    }
    
    
    pair<int, int> customers[n];
    int a, b;
    for(int i = 0; i<n; i++) {
        cin >> a >> b;
        customers[i]={a,b};
    }
    sort(customers, customers + n);
    int rooms=1;
    priority_queue<int,vector<int>,greater<int>> depart; //return smallest
    depart.push(customers[0].second);
    for(int i = 1; i<n; i++) {
        if(customers[i].first > depart.top()) {
            depart.push(customers[i].second);
            depart.pop();
        } else {
            rooms++;
            depart.push(customers[i].second);
        }
    }
    cout << rooms << endl;
}
