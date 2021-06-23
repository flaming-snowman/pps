// My solution using a binary indexed tree

#include <bits/stdc++.h>

using namespace std;

const int MAXN=5000;
int n, BITree[MAXN+1];

int getCount(int index)
{
    int count = 0;
    while (index>0)
    {
        count += BITree[index];
        index -= index & (-index);
    }
    return count;
}

void updateBIT(int index, int x)
{
    while (index <= n)
    {
        BITree[index] += x;
        index += index & (-index);
    }
}

int main()
{
    cin >> n;
    int x, ans=0;
    for(int i = 0; i<n; i++) {
        cin >> x;
        updateBIT(x, 1);
        ans+=getCount(n)-getCount(x); // count the number of elements bigger than x
		// each number bigger than x is an inversion
    }
    cout << ans << endl;
}


