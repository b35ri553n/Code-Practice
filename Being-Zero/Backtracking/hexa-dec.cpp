// Given N, Generate and Print all the Hexadecimal Counting Strings of length N (i.e. N-digits).
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
#define N 1000000
// for(int i = 0; i < n; i++) 
ll dp[N + 1];

ll modSum(ll a, ll b) {
    return (a % M + b % M) % M;
}

ll modProd(ll a, ll b) {
    return (a % M * b % M) % M;
}

ll modDiff(ll a, ll b) {
    return (a % M - b % M + M) % M;
}

int n;
char s[2];
void printHexDec(int i, char s[]) {
    if(i == n) {
        for(int i = 0; i < n; i++)
            cout << s[i];
        cout << " ";
        return;
    }
    for(int j = 0; j < 16; j++) {
        if(j >= 10) s[i] = 'A' + (j - 10);
        else s[i] = '0' + j;
        printHexDec(i + 1, s);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    // cin.ignore();
    // for(int i = 0; i <= N; i++) 
    //     dp[i] = -1;
    while(t--) {
        cin >> n;
        printHexDec(0, s);
        cout << endl;
    }

    return 0;
}