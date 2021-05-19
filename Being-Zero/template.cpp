
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
// for(int i = 0; i < n; i++) 

ll modSum(ll a, ll b) {
    return (a % M + b % M) % M;
}

ll modProd(ll a, ll b) {
    return (a % M * b % M) % M;
}

ll modDiff(ll a, ll b) {
    return (a % M - b % M + M) % M;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n;
    cin >> t;
    // cin.ignore();
    while(t--) {
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
    }

    return 0;
}