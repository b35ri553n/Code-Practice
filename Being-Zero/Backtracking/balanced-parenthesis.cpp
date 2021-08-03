// Given N, generate all valid parenthesis combinations of n-pairs.
// For N=2, Valid Parenthesis combinations are (()) and ()()
// For N=3, Valid Parenthesis combinations are ()()(), ()(()), (())(), ((())), (()())
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
char path[40];
void generateValidParenthesis(int i, int oc) {  // oc is count of open brackets filled
    if(i == 2 * n) {
        for(int j = 0; j < 2 * n; j++)
            cout << path[j];
        cout << " ";
        return;
    }
    if(oc < n) {
        path[i] = '(';
        generateValidParenthesis(i + 1, oc + 1);
    } 
    if(oc > i - oc) {
        path[i] = ')';
        generateValidParenthesis(i + 1, oc);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    generateValidParenthesis(0, 0);
    cout << "\n";
    return 0;
}