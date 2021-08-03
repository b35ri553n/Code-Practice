// Given integers N and R, Compute and Print nCr % 109+7.​

// It is recursively defined as
// nCr  = n-1Cr + n-1Cr-1
// nC0  = 1
// nCn  = 1

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
// for(int i = 0; i < n; i++) 
ll dp[1001][1001];

ll modSum(ll a, ll b) {
    return (a % M + b % M) % M;
}

ll modProd(ll a, ll b) {
    return (a % M * b % M) % M;
}

ll modDiff(ll a, ll b) {
    return (a % M - b % M + M) % M;
}

ll calNCR(int n, int r) {
    if(r == 0 || r == n) return 1;
    if(dp[n][r] == -1) {
        dp[n][r] = modSum(calNCR(n - 1, r), calNCR(n - 1, r - 1));
    }
    return dp[n][r];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n, r;
    cin >> t;
    // cin.ignore();
    for(int i = 0; i <= 1000; i++) 
        for(int j = 0; j <= 1000; j++) 
            dp[i][j] = -1;
    while(t--) {
        cin >> n >> r;
        cout << calNCR(n, r) << endl;
    }

    return 0;
}