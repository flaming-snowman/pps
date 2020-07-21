//Submitted by Shreyas Thumathy
//This code uses a large amount of macros, and as such may be hard to read
//I tried my best to clean up the macros but left many of them in
//The other solutions do not use so many macros

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pi;

const ll MX = 205;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

#define F0R(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define pb push_back
#define mp make_pair
#define f first
#define s second

ll N, B, T;
char grid[MX][MX];
bool solved[MX][MX][9][9];
ll xdir[4] = {1, -1, 0, 0}, ydir[4] = {0, 0, -1, 1};


int main() {
    cin >> N >> B >> T;
    F0R(i, N) F0R(j, N) cin >> grid[i][j];

    priority_queue<pair<ll, pair<pi, pi> >, vector<pair<ll, pair<pi, pi> > >, greater<pair<ll, pair<pi, pi> > > > pq;
    
    pq.push(mp(0, mp(mp(0, 0), mp(0, 0))));
    
    while (pq.size()) {
        pair<ll, pair<pi, pi> > cur = pq.top();
        pq.pop();

        ll x = cur.s.f.f, y = cur.s.f.s, cost = cur.f, b = cur.s.s.f, t = cur.s.s.s;
        //cout << x << ", " << y << ", " << cost << ", " << b << ", " << t << "\n";
        if (solved[x][y][b][t]) continue;
        solved[x][y][b][t] = 1;

        if (x == N - 1 && y == N - 1) {
            cout << cost << endl;
			return 0;
        }

        F0R(z, 4) {
            ll nx = x + xdir[z], ny = y + ydir[z];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N || grid[nx][ny] == '.') continue;
            ll nb = b + (grid[nx][ny] == 'L' ? 1 : 0), nt = t + (grid[nx][ny] == 'R' ? 1 : 0);
            if (nb > 8 || nt > 8) continue;
            ll nc = cost + (grid[nx][ny] == 'L' ? B * (1 << b) : 0) + (grid[nx][ny] == 'R' ? T * (1 << t) : 0);
            pq.push(mp(nc, mp(mp(nx, ny), mp(nb, nt))));
        }
    }

	cout << -1 << endl;
}

