#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
  
const int MAX = 1e5;
const int MAXLOG = int(log2(MAX))+1;
int lookupmin[MAX][MAXLOG], lookupmax[MAX][MAXLOG];

// fill lookup table using magic
void buildMin(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        lookupmin[i][0] = arr[i]; 
  
    for (int j = 1; (1 << j) <= n; j++) { 
        for (int i = 0; (i + (1 << j) - 1) < n; i++) { 
            if (lookupmin[i][j - 1] <  
                        lookupmin[i + (1 << (j - 1))][j - 1]) 
                lookupmin[i][j] = lookupmin[i][j - 1]; 
            else
                lookupmin[i][j] =  
                         lookupmin[i + (1 << (j - 1))][j - 1]; 
        } 
    } 
} 
void buildMax(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        lookupmax[i][0] = arr[i]; 
  
    for (int j = 1; (1 << j) <= n; j++) { 
        for (int i = 0; (i + (1 << j) - 1) < n; i++) { 
            if (lookupmax[i][j - 1] >  
                        lookupmax[i + (1 << (j - 1))][j - 1]) 
                lookupmax[i][j] = lookupmax[i][j - 1]; 
            else
                lookupmax[i][j] =  
                         lookupmax[i + (1 << (j - 1))][j - 1]; 
        } 
    }
} 

  
// Returns minimum of arr[L..R] 
int min(int L, int R) 
{ 
    int j = (int)log2(R - L + 1); 
  
    if (lookupmin[L][j] <= lookupmin[R - (1 << j) + 1][j]) 
        return lookupmin[L][j]; 
  
    else
        return lookupmin[R - (1 << j) + 1][j]; 
}
// Returns maximum of arr[L..R] 
int max(int L, int R) 
{ 
    int j = (int)log2(R - L + 1); 
  
    if (lookupmax[L][j] >= lookupmax[R - (1 << j) + 1][j]) 
        return lookupmax[L][j]; 
  
    else
        return lookupmax[R - (1 << j) + 1][j]; 
}
  
int main()
{
    int n, m;
    cin >> n >> m;
    int nums[n];
    for(int i = 0; i<n; i++){
        cin >> nums[i];
    }
    buildMin(nums, n);
    buildMax(nums, n);
    ll dpsum[n+1];
    fill(dpsum, dpsum+n+1, 0);
    for(int i = 0; i<n; i++) {
		if(dpsum[i]>dpsum[i+1]) {
			dpsum[i+1]=dpsum[i];
		}
        for(int j = 2; j<=m; j++) {
            if(i+j<=n) {
                ll unstable=dpsum[i]+max(i, i+j-1)-min(i, i+j-1);
                if(unstable>dpsum[i+j]) {
                    dpsum[i+j]=unstable;
                }
            }
        }
    }
    cout << dpsum[n] << endl;
}


