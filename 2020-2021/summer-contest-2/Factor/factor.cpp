// Submission by Alex Proshkin

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    double end = n;
    while (n % 2 == 0) {
        n /= 2;
        cout << 2 << ' ';
    }
    for (int i = 3; i <= sqrt(n); i+=2) {
        while (n % i == 0) {
            n /= i;
            cout << i << ' ';
        }
    }
    if (n > 2) {
        cout << n;
    }
}
