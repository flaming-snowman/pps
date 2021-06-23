// My solution

#include <bits/stdc++.h>

using namespace std;

bool isset(string c1, string c2, string c3) {
    for(int i = 0; i<4; i++) { //check 4 categories
        //check if all 3 cards have same property or different properties
        if(c1[i]==c2[i] && c1[i]==c3[i] && c2[i]==c3[i]) {} //do nothing if successful
        else if(c1[i]!=c2[i] && c1[i]!=c3[i] && c2[i]!=c3[i]) {}
        else return false; //fail
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    string c1, c2, c3;
    for(int i = 0; i<n; i++) {
        cin >> c1 >> c2 >> c3;
        if(isset(c1, c2, c3)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

