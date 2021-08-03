// Calculate Nth CATALAN number where CATALAN series (0 index) is defined as this:
//  1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, ...

// This is how we calculate Nth Catalan Number:
// catalan(n) = cat(n-1)*cat(0) + cat(n-2)*cat(1)+.......+ cat(1)*cat(n-2) + cat(0)*cat(n-1)

// Recursively defining
// catalan(n) = SUM OF ALL (cat(i) * cat(n-i-1)) where i changes from 0 to n-1
// catalan(0) = 1
// catalan(1) = 1

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
// for(int i = 0; i < n; i++) 
ll dp[1001];

ll modSum(ll a, ll b) {
    return ((a % M + b % M) % M);
}

ll modProd(ll a, ll b) {
    return ((a % M * b % M) % M);
}

ll modDiff(ll a, ll b) {
    return ((a % M - b % M + M) % M);
}

ll nThCatalan(int n) {
    if(n == 0 || n == 1) return 1;
    if(dp[n] == 0) {
        for (int i = 0; i < n; i++) {
            dp[n] = modSum(dp[n], modProd(nThCatalan(i), nThCatalan(n - i - 1)));
        }
    }
    return dp[n];
}

void preCompute(int n) {
    dp[0] = 1, dp[1] = 1;
    for(int i = 2; i <= 1000; i++) {
        for(int j = 0; j < i; j++)
            dp[i] = modSum(dp[i], modProd(dp[j], dp[i- j - 1]));
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n;
    cin >> t;
    // cin.ignore();
    //top-down
    for(int i = 0; i <= 1000; i++)
        dp[i] = 0;
    // preCompute(n);  
    while(t--) {
        cin >> n;
        cout << nThCatalan(n) << endl;
        // bottom-up
        // cout << dp[n] << endl;
    }

    return 0;
}