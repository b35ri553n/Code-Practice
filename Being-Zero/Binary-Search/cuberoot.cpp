// Find the cube root of the given number. Assume that all the input test cases will be a perfect cube.
// Note: Do not use any inbuilt functions/libraries for your main logic.
// 30 points
// 1 <= T <= 103
// -109 <= N <= 109
// 70 points
// 1 <= T <= 106
// -1018 <= N <= 1018

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll cubeRoot(ll n) {
    // h can be ans of max val of N i.e., cbrt(1e18)=1e6
    ll l = 0, h = (ll)1e6;
    if(n < h) h = n;
    while(l <= h) {
        ll m = l + (h - l) / 2;
        if(m * m * m == n) return m;
        else if(m * m * m > n) h = m - 1;
        else l = m + 1;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    ll n;
    cin >> t;
    while(t--) {
        cin >> n;
        int sign = 1;
        if(n < 0) sign = -1;
        n *= sign;
        if(sign == -1) cout << "-" << cubeRoot(n) << "\n";
        else cout << cubeRoot(n) << "\n";
    }

    return 0;
}