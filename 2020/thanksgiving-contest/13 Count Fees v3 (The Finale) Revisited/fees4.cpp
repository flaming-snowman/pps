// My solution

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int basefee=0, discount=0;
    for(int i = 0; i<n; i++) {
        if(i==n-1) { //exception for final character
            if(s[i]=='E') {
                basefee+=1;
            } else if(s[i]=='A') {
                basefee+=2;
            }
            break;
        }
        if(s[i]=='E' && s[i+1]=='A') {
            basefee+=5;
            i++; //make sure to skip the next letter so the A doesn't get double counted
        } else if(s[i]=='E') {
            basefee+=1;
        } else if(s[i]=='A') {
            basefee+=2;
        } else if(s[i]=='P' && s[i+1]=='H') {
            basefee+=3;
        }
    }
    int dp[n]; //dp on the max discount ending a FEE/FEA/PHEE/PHEA at index position
    fill(dp, dp+n, 0);
    int firstF, firstP, firstH, firstE, lastEA;
    for(int i = 0; i<n; i++) {
        //next discount is either a FEE/FEA or a PHEE/PHEA so we test both
        //every string starts with a F/PH followed by an E followed by an E/A
        for(firstF = i; firstF<n; firstF++) {
            if(s[firstF]=='F') {
                break; //position of first F
            }
        }
        for(firstE = firstF+1; firstE<n; firstE++) {
            if(s[firstE]=='E') {
                break; //position of first E after F
            }
        }
        for(lastEA = firstE+1; lastEA<n; lastEA++) {
            if(s[lastEA]=='E' || s[lastEA]=='A') { //found first occurence of FEE/FEA
                dp[lastEA]=max(dp[lastEA], dp[i]+1); //update dp
            }
        }
        //repeat for PHEE/PHEA
        for(firstP = i; firstP<n; firstP++) {
            if(s[firstP]=='P') {
                break; //position of first P
            }
        }
        for(firstH = firstP+1; firstH<n; firstH++) {
            if(s[firstH]=='H') {
                break; //position of first H after P
            }
        }
        for(firstE = firstH+1; firstE<n; firstE++) {
            if(s[firstE]=='E') {
                break; //position of first E after H
            }
        }
        for(lastEA = firstE+1; lastEA<n; lastEA++) {
            if(s[lastEA]=='E' || s[lastEA]=='A') { //found first occurence of PHEE/PHEA
                dp[lastEA]=max(dp[lastEA], dp[i]+2); //update dp
            }
        }
    }
    for(int i = 0; i<n; i++) {
        discount=max(discount, dp[i]); //find max discount
    }
    cout << basefee-discount << endl;
}

