// Tribonacci Number is number in a series with is sum of previous three numbers.

// nth tribonacci number is defined as 
// a(n) = a(n-1) + a(n-2) + a(n-3)

// with  first three numbers known as
// a(0) = a(1) = 0, a(2) = 1.

// They grow very fast, hence print tribonacci number % 10^9+7

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

ll nThTrib(int n) {
    if(n == 0 || n == 1) return 0;
    else if(n == 2) return 1;
    if(dp[n] == -1) dp[n] = modSum(nThTrib(n - 1), modSum(nThTrib(n - 2), nThTrib(n- 3)));
    return dp[n];
}

void preCompute() {
    dp[0] = 0, dp[1] = 0, dp[2] = 1;
    for(int i = 3; i <= 1000; i++) 
        dp[i] = modSum(dp[i - 1], modSum(dp[i - 2], dp[i - 3]));
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
        dp[i] = -1;
    // preCompute();
    while(t--) {
        cin >> n;
        cout << nThTrib(n) << endl;
        // bottom-up
        // cout << dp[n] << endl;
    }

    return 0;
}