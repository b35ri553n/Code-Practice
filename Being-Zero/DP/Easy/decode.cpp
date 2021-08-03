#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
#define N 10000
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

ll noOfMsgs(int n, string msg) {
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(dp[n] == -1) {
        dp[n] = modSum(modSum(modProd(n / 2, noOfMsgs(2)), modProd(noOfMsgs(1), n % 2)), 1);
    }
    return dp[n];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll t, n;
    string msg;
    cin >> t;
    // cin.ignore();
    for(int i = 0; i <= N; i++) 
        dp[i] = -1;
    while(t--) {
        cin >> n >> msg;
        cout << noOfMsgs(n, msg) << endl;
    }

    return 0;
}