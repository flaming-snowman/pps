// My solution

#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

int main()
{
    int n;
    long long m;
    string s;
    cin >> n >> m >> s;
    int numE, numA;
    for(int i = 0; i<n; i++) {
        m%=MOD;
        if(isdigit(s[i])) {
            m+=s[i]-'0';
            continue;
        }
        if(i>n-3) {
            continue;
        }
        if(s.substr(i, 3) == "FEA") {
            m*=2;
            continue;
        }
        if(s[i]=='F') {
            numE=0;
            while(i+1+numE<n && s[i+1+numE]=='E') {
                numE++;
            }
            if(numE > 1) {
                m+=numE;
            }
            continue;
        }
        if(s.substr(i,3) == "PHE") {
            numE=1;
            numA=0;
            while(i+2+numE<n && s[i+2+numE]=='E') {
                numE++;
            }
            while(i+2+numE+numA<n && s[i+2+numE+numA]=='A') {
                numA++;
            }
            if(numA==0) {
                if(numE>1) {    
                    m+=numE*3;
                }
                continue;
            }
            if(numE%2==0 && numA%2==0) {
                m=(m+1)/2;
            }
            else if(numE%2==1 && numA%2==0) {
                m+=numE;
                m=(m+1)/2;
            }
            else if(numE%2==0 && numA%2==1) {
                m+=numE;
                m*=2;
            }
            else {
                m+=numE+numA*3;
            }
        }
    }
    m%=MOD;
    
    cout << m << endl;
}
