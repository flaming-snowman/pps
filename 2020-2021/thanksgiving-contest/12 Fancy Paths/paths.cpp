// Me and Jack's solution

#include <bits/stdc++.h>

using namespace std;

const int MAXN=10;
bool defVisited[MAXN+1]; //default visited array, all unvisited
int n, e, m, cAns;
vector<pair<int, int>> adj[MAXN+1]; //adjacency list containing vertex numbers and weights

void dfs(int cur, int target, int dis, int prev, bool visited[]) { //depth first search
  if (visited[cur]) return;
  bool curVisited[MAXN+1];
  for(int i = 0; i<MAXN+1; i++) curVisited[i] = visited[i]; //create copy of array because pointers suck
  curVisited[cur] = true;
  if (cur == target) {
    if (cAns == -1) cAns = dis;
    else cAns = min(cAns, dis);
    return;
  }
  for (pair<int,int> x : adj[cur]) { //check all adjacent vertices
    if (curVisited[x.first]) continue; //vertex already visited so we skip it
    if (prev==0 || __gcd(x.second, prev)>1) { //previous weight must share a divisor with vertex's weight
        dfs(x.first, target, dis + 1, x.second, curVisited); //update current vertex, distance, current weight, and visited array
    }
  }
}

int main() {
  cin >> n >> e >> m;
  for(int i = 0; i<e; i++) {
    int cur1, cur2, cur3;
    cin >> cur1 >> cur2 >> cur3;
    adj[cur1].push_back({cur2, cur3}); //create adjacency list
    adj[cur2].push_back({cur1, cur3});
  }
  for(int i = 0; i<m; i++) {
    cAns = -1;
    int cur1, cur2; cin >> cur1 >> cur2;
    dfs(cur1, cur2, 0, 0, defVisited); //run bfs for each query
    cout << cAns << "\n";
  }
}
