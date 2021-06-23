//Intended solution by Jack Chang (modified)
#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> nums;
vector<char> operations;

int main() {
	cin >> n;
	for(int i = 0; i<n; i++){
		long long cur; cin >> cur;
		nums.push_back(cur);
	}
	for(int i = 0; i<n-1; i++) {
		char curr; cin >> curr;
		operations.push_back(curr);
	}
	int c = 0;
	while (c < operations.size()) {
		if (operations[c] == '^') {
			nums[c] = pow(nums[c], nums[c + 1]);
			nums.erase(nums.begin() + c + 1);
			operations.erase(operations.begin() + c);
		}
		else c++;
	}
	c = 0;
	while (c < operations.size()) {
		if (operations[c] == '*') {
			nums[c] *= nums[c + 1];
			nums.erase(nums.begin() + c + 1);
			operations.erase(operations.begin() + c);
		}
		else if (operations[c] == '/') {
			nums[c] /= nums[c + 1];
			nums.erase(nums.begin() + c + 1);
			operations.erase(operations.begin() + c);
		}
		else if (operations[c] == '%') {
			nums[c] %= nums[c + 1];
			nums.erase(nums.begin() + c + 1);
			operations.erase(operations.begin() + c);
		}
		else c++;
	}
	c = 0;
	while (c < operations.size()) {
		if (operations[c] == '+') {
			nums[c] += nums[c + 1];
			nums.erase(nums.begin() + c + 1);
			operations.erase(operations.begin() + c);
		}
		else if (operations[c] == '-') {
			nums[c] -= nums[c + 1];
			nums.erase(nums.begin() + c + 1);
			operations.erase(operations.begin() + c);
		}
		else c++;
	}
	cout << nums[0];
}
