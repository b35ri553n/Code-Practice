
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

void mergeAndPrint(int *a, int na, int *b, int nb) {
    // use auxilary arrays for merging
    int i = 0, j = 0;
    while(i < na && j < nb) {
        if(a[i] <= b[j]) 
            cout << a[i++] << " ";
        else cout << b[j++] << " ";
    }
    while(i < na) cout << a[i++] << " ";
    while(j < nb) cout << b[j++] << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, na, nb;
    cin >> t;
    while(t--) {
        cin >> na >> nb;
        int a[na], b[nb];
        for(int i = 0; i < na; i++) 
            cin >> a[i];
        for(int i = 0; i < nb; i++) 
            cin >> b[i];
        mergeAndPrint(a, na, b, nb);
    }

    return 0;
}