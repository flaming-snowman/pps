//Modified submission originally submitted by Shreyas
//This solution runs slower than mine but is a lot shorter in code length

#include <bits/stdc++.h>

using namespace std;

int N, M;
string s;

int main() {
    cin >> N >> M >> s;

    stack<pair<char, int> > stick;

    int cnt = 0;
    for (int i = 0; i <= N; i++) {
        char x = s[i];
        if (stick.size() && stick.top().second == M) {stick.pop(); cnt++;}
        if (i == N) break;
        if (stick.empty() || stick.top().first != x) {
            stick.push(make_pair(x, 1));
        }
        else {
            stick.top().second++;
        }
    }

    cout << cnt << endl;
}
