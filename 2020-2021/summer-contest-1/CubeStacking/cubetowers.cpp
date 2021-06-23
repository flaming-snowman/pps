#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int> arr; //size of top block in each tower. note: always stays sorted
	arr.push_back(0); //for some reason upper_bound fails without this buffer
    int cnt=1;
    int val;
    for(int i=0; i<n; i++) {
        cin>>val;
        auto it = upper_bound(arr.begin(), arr.end(), val+1);
        if(it == arr.end()) {
            arr.push_back(val);
            cnt++;
        }
        else {
            *it = val;
        }
    }
    cout<<cnt-1<<endl;
}
