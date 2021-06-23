// My solution

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    int ans=0;
    for(int i = 0; i<n; i++) {
        cin >> nums[i];
    }
    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            if(nums[j]<nums[i]) {
                ans++;
            }
        }
    }

    cout << ans << endl;
}

