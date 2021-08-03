// Derangements of N gives us - A permutation of the elements of a set such that none of the elements appear in their original position.
//  1, 0, 1, 2, 9, 44, 265, 1854, 14833, 133496, . . .

// This is how we calculate Derangements of N:
// derangements(n) = (n-1) * [ derangements(n-1)+derangements(n-2) ]

// Recursively defining,
// der(n) = (n-1) * [ der(n-1) + der(n-2) ]
// der(0) = 1
// der(1) = 0

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

ll derangements(int n) {
    if(n == 0) return 1;
    if(n == 1) return 0;
    if(dp[n] == -1) {
        dp[n] = modProd(n - 1, modSum(derangements(n - 1), derangements(n - 2)));
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
        cout << derangements(n) << endl;
    }

    return 0;
}