//my code uses some macros. rep(i, n) loops from 0 to n-1
#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i<n; i++)
typedef long long ll;

const ll INF=1e18;
const int MAXN=200;
char grid[MAXN][MAXN];

bool solve(int n, int b, int t) //bfs to see if traversable using b bridges and t trampolines
{
	int dir[4][2] = {{1,0},{0,1},{0,-1},{-1,0}}; //4 directions
	bool vis[n][n][b+1][t+1]; //initialize visited to false
	rep(i, n) {
		rep(j, n) {
			rep(k, b+1) {
				rep(l, t+1) {
					vis[i][j][k][l]=false;
				}
			}
		}
	}
	queue<vector<int>> q;
	q.push({0,0,0,0}); //row, column, bridges used, trampolines used
	vis[0][0][0][0] = true; 
	int x,y,nx,ny,cb,ct; //x, y, newx, newy, cur bridges, cur trampolines
	while (!q.empty()) 
	{
		x = q.front()[0];
		y = q.front()[1];
		cb = q.front()[2];
		ct = q.front()[3];
		if(x==n-1 && y==n-1)
			return true;
		q.pop();
		rep(d,4) //try the 4 directions
		{
			nx = x+dir[d][0];
			ny = y+dir[d][1];
			if(nx<0 || nx >= n || ny<0 || ny >= n)
				continue;//out of bounds
			if(grid[nx][ny] != '#')//blocked
			{
				if(grid[nx][ny]=='L' && cb+1 <= b && !vis[nx][ny][cb+1][ct]) { 
					//use bridge over lava
					vis[nx][ny][cb+1][ct]=true;
					q.push({nx,ny,cb+1,ct});
				}
				if(grid[nx][ny]=='R' && ct+1 <= t && !vis[nx][ny][cb][ct+1]) { 
					//use trampoline over rocks
					vis[nx][ny][cb][ct+1]=true;
					q.push({nx,ny,cb,ct+1});
				}
			}
			else if(!vis[nx][ny][cb][ct])//open space
			{
				vis[nx][ny][cb][ct] = true;
				q.push({nx,ny,cb,ct});
			}
		}
	}
	return false;
}

int main()
{
	int n;
	ll b, t;
	cin >> n >> b >> t;
	rep(i, n) {
		rep(j, n) {
			cin >> grid[i][j];
		}
	}
	ll mincoins = INF, coins;
	rep(i, 9) {
		int lo = 0;
		int hi = 9;
		while(lo<hi) {
			int m = (lo+hi)/2;
			if(solve(n, i, m)) hi=m;
			else lo=m+1;
		}
		if(lo<9) {
			coins=b*(pow(2, i)-1)+t*(pow(2, lo)-1);
			if(coins < mincoins) {
				mincoins=coins;
			}
		}
	}
	if(mincoins == INF) {
		cout << -1 << endl;
	} else {
		cout << mincoins << endl;
	}
}

