// Given n and k. Find count(n, k) based on given Recursive Formula and base cases.

// count(0, k) = 0,  k!=0   or k==0
// count(n, 0) = 1,  n!=0

// Since answer can be very large, print answer MOD 109+7

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
// for(int i = 0; i < n; i++) 
int dp[501][501];

ll modSum(ll a, ll b) {
    return (a % M + b % M) % M;
}

ll modProd(ll a, ll b) {
    return (a % M * b % M) % M;
}

ll modDiff(ll a, ll b) {
    return (a % M - b % M + M) % M;
}

ll calCount(int n, int k) {
    if(n == 0) return 0;
    if(k == 0) return 1;
    if(dp[n][k] == -1) {
        int limit = min(k, n - 1);
        ll ans = 0;
        for(int i = 0; i <= limit; i++) 
            ans = modSum(calCount(n - 1, k - i), ans);
        dp[n][k] = ans;
    }
    return dp[n][k];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n, k;
    cin >> t;
    // cin.ignore();
    for(int i = 0; i <= 500; i++) 
        for(int j = 0; j <= 500; j++) 
            dp[i][j] = -1;
    while(t--) {
        cin >> n >> k;
        cout << calCount(n, k) << endl;
    }

    return 0;
}