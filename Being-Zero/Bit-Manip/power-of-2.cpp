// Given a positive number N(>=0), tell if it can be written as an INTEGRAL power of 2 or not. e.g. 32 is 2^5.

#include<bits/stdc++.h>
using namespace std;

bool isPowerOf2(long long int n) {
    return (n != 0) && (n & (n - 1LL)) == 0; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    long long int n;
    while(t--) {
        cin >> n;
        cout << ((isPowerOf2(n)) ? "True" : "False") << endl;
    }
    return 0;
}