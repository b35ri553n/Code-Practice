// Given n and k (positive integers), Print all N bit binary strings that have exactly K bits set, on the same line separated by space.
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

char path[20];
void helper(int n, int k, int i, int zc, int oc) {    // zc is no of 0s filled so far
    if(i == n) {
        for(int j = 0; j < n; j++)
            cout << path[j];
        cout << " ";
        return;
    }
    if(zc < n - k) {
        path[i] = '0';
        helper(n, k, i + 1, zc + 1, oc);
    }
    if(oc < k) {
        path[i] = '1';
        helper(n, k, i + 1, zc, oc + 1);
    }
}

void printNBitNumbersWithKBitsSet(int n, int k) {  
    helper(n, k, 0, 0, 0);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, k, t;
    cin >> t;
    // cin.ignore();
    // for(int i = 0; i <= N; i++) 
    //     dp[i] = -1;
    while(t--) {
        cin >> n >> k;
        printNBitNumbersWithKBitsSet(n, k);
        cout << "\n";
    }

    return 0;
}