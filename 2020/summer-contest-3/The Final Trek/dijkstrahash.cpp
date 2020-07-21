//Intended solution by Elden Ren
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200;
bool solved[800000000];
char grid[205][205];
int hash_state(int x, int y, int b, int t) {
    return x*MAXN+y+b*MAXN*MAXN+t*MAXN*MAXN*MAXN;
}
int main()
{
    int n;
    long long b, t;
    cin >> n >> b >> t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    priority_queue<pair<long long, int>> q;
    q.push(make_pair((long long) 0, hash_state(0,0,0,0)));
    while(!q.empty()) {
        pair<long long, int> p = q.top();
        q.pop();
        int f = p.second;
        int t1=p.second/(MAXN*MAXN*MAXN);
        int b1=(p.second%(MAXN*MAXN*MAXN))/(MAXN*MAXN);
        int x=(p.second%(MAXN*MAXN))/(MAXN);
        int y=p.second%MAXN;
        if (solved[p.second]) continue;
        solved[p.second] = true;
        if (x==n-1 && y == n-1) {
            cout << abs(p.first) << "\n";
            return 0;
        }
        
        for (int vx = -1; vx <= 1; vx++) {
            for (int vy = -1; vy <= 1; vy++) {
                if (abs(vx)==abs(vy)) continue;
                int x2 = x+vx;
                int y2 = y+vy;
                if (x2 >= n || x2 < 0 || y2 >= n || y2 < 0 || grid[x2][y2] == '.') continue;
                int b2 = b1 + (grid[x2][y2] == 'L' ? 1 : 0);
                int t2 = t1 + (grid[x2][y2] == 'R' ? 1 : 0);
                long long cost = abs(p.first) + (grid[x2][y2] == 'L' ? (long long)b*(1<<b1) : (long long) 0) + (grid[x2][y2] == 'R' ? (long long)t*(1<<t1) : (long long) 0);
                if (b2 >8 || t2 > 8 || solved[hash_state(x2, y2, b2, t2)]) continue;
                q.push(make_pair(-cost, hash_state(x2, y2, b2, t2)));
            }
        }
    }
    cout<<-1<<"\n";
    return 0;
}
