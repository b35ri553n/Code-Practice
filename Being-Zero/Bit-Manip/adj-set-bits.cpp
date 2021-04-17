// Check if set bits are adjacent in binary representation of a number. Number should have more than one bit set.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isKthBitSet(int n, int k) {
    return (n & (1 << k)) != 0;
}

bool areSetBitsAdj(int n) {
    if((n & (n - 1)) == 0) return false;
    // pos of leftmost set bit
    int k = (int)log2(n);
    bool flag = false;
    for(int i = k; i > 0; i--) {
        if(isKthBitSet(n, i) && isKthBitSet(n, i - 1));
        else if(isKthBitSet(n, i) && !isKthBitSet(n, i - 1) && !flag) flag = true;
        else if(!isKthBitSet(n, i) && isKthBitSet(n, i - 1) && flag) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    while(cin >> n) 
        cout << ((areSetBitsAdj(n)) ? "true" : "false") << endl;

    return 0;
}