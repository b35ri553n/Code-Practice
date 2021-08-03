// minCost of N gives is calculated as:
// minCost(n) = (n-1) * [ minCost(n-1) + minCost(n-2) ]

// minCost(0) = 0
// minCost(1) = 1

// Given multiple values of N, calculate minCost(n)

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
#define R 101
#define C 101
// for(int i = 0; i < n; i++) 
ll dp[R][C];

ll modSum(ll a, ll b) {
    return (a % M + b % M) % M;
}

ll modProd(ll a, ll b) {
    return (a % M * b % M) % M;
}

ll modDiff(ll a, ll b) {
    return (a % M - b % M + M) % M;
}

int r, c;
ll mat[R][C];

ll minCost(int i, int j) {
    // base case: last cell
    if(i == r - 1 && j == c - 1) return mat[i][j];

    // boundary case: elements in last col
    if(j == c - 1) dp[i][j] = mat[i][j] + minCost(i + 1, j);

    // boundary case: elements in last row
    if(i == r - 1) dp[i][j] = mat[i][j] + minCost(i, j + 1);

    // if cost is not yet calculated
    if(dp[i][j] == -1) dp[i][j] = mat[i][j] + min(minCost(i, j + 1), minCost(i + 1, j));

    return dp[i][j];
} 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; 
    cin >> t;
    while(t--) {
        cin >> r >> c;

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                dp[i][j] = -1;
            }
        }

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> mat[i][j];
            }
        }

        cout << minCost(0, 0) << endl;
    }

    return 0;
}