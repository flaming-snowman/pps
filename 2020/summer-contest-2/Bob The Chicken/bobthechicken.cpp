// My solution (inspired by Jack Chang and Shreyas Thumathy's solution)

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

const int MAXN = 2000+5;

int N;
bool grid[MAXN][MAXN];
pi dir[4] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
bool visited[MAXN][MAXN];
queue<pair<pi, int> > q; //pi are the coords, int is the moves

int bfs() {
    while (!q.empty()) {
        pair<pi, int> f = q.front();
        pi coords = f.first;
        int dist = f.second;
        int x = coords.first, y = coords.second;
        q.pop();

        if (y == N - 1) {
            return dist; //reached end
        }

        if (visited[x][y]) continue;
        visited[x][y] = true;

        for(int i = 0; i<4; i++) {
            int nx = x + dir[i].first, ny = y + dir[i].second;
            if (nx < 0 || nx >= N || ny < 0 || ny >= N || !grid[nx][ny]) {
                continue; //check bounds and for obstacles
            }
            q.push({{nx, ny}, dist + 1});
        }
    } 
    return -1;
}

int main() {
    cin >> N;
    if(N == 0) {
        cout << 0 << "\n";
        return 0;
    }
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<N; j++) {
            char x; cin >> x;
            if(x == '#') {
                grid[i][j] = true;
            } else {
                grid[i][j] = false;
            }
        }
    }
    for(int i = 0; i < N; i++) {
        if (grid[i][0]) {
            q.push({{i, 0}, 0}); //push all starting points
        }
    }
    int ans = bfs();
    cout << ans << "\n";
    
    return 0;
}
