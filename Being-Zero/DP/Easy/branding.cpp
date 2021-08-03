// Branding of N gives is calculated as:
// branding(n) = (n-1) * [ branding(n-1) + branding(n-2) ]

// branding(0) = 0
// branding(1) = 1

// Given multiple values of N, calculate branding(n)

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

ll branding(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n] == -1) {
        dp[n] = modProd(n - 1, modSum(branding(n - 1), branding(n - 2)));
    }
    return dp[n];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll t, n;
    cin >> t;
    // cin.ignore();
    for(int i = 0; i <= N; i++) 
        dp[i] = -1;
    while(t--) {
        cin >> n;
        cout << branding(n) << endl;
    }

    return 0;
}