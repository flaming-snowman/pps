#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i<n; i++)

ofstream fout ("sets.out");
int n;

int main() {
	vector<int> nums;
	rep(i, 81) {
		nums.push_back(i);
	}
	n=10000;
	fout << n << endl;
	int c;
	string s;
	char lookup[4][3] = {{'g', 'r', 'p'}, {'o', 's', 'd'}, {'s', 'o', 'f'}, {'1', '2', '3'}};
	rep(i, n) {
		shuffle(nums.begin(), nums.end(), default_random_engine(unsigned(time(0))));
		s="";
		rep(j, 3) {
			c=nums[j];
			rep(k, 4) {
				s+=lookup[k][c%3];
				c/=3;
			}
			if(j!=2) {
				s+=' ';
			}
		}
		fout << s << endl;
	}
}

