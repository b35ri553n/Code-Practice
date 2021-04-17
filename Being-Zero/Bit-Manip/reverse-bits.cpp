// Given a number, reverse it's bits order

#include<bits/stdc++.h>
using namespace std;
#define INT_SIZE 32
typedef long long int ll;

bool isKthBitSet(int n, int k) {
    return (n & (1 << k)) != 0;
}

int setKthBit(int n, int k) {
    return (n | (1 << k));
}

int clearKthBit(int n, int k) {
    return (n & (~(1 << k)));
}

void reverseBits(unsigned int &n) {
    for(int i = 0; i < INT_SIZE  / 2; i++) {
        bool isDiff1 = false, isDiff2 = false;
        if(isKthBitSet(n, i) && !isKthBitSet(n, INT_SIZE - 1 - i)) isDiff1 = true;
        if(!isKthBitSet(n, i) && isKthBitSet(n, INT_SIZE - 1 - i)) isDiff2 = true;
        if(isDiff1) {
            n = clearKthBit(n, i);
            n = setKthBit(n, INT_SIZE - 1 - i);
        } else if(isDiff2) {
            n = setKthBit(n, i);
            n = clearKthBit(n, INT_SIZE - 1 - i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        unsigned int n;
        cin >> n;
        reverseBits(n);
        cout << n << endl;
    }

    return 0;
}