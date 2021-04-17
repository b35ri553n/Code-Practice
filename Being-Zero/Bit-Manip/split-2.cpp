// Given a number N, Split it to be represented as sum of powers of 2. N = 2i 2j 2k .... 1
#include<bits/stdc++.h>
using namespace std;

void printPowersOf2(long long int n) {
    while(n != 0) {
        // pos of leftmost set bit = log2n => log2n-1 is used for
        int k = (int)log2(n);
        cout << (1LL << k) << " ";
        n = n & (~(1LL << k));
    }
    cout << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        printPowersOf2(n);
    }

    return 0;
}