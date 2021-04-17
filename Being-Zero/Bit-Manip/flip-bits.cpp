// Given two numbers A and B. Write a program to count number of bits needed to be flipped to convert A to B.

// To convert 9 (1001) to 6 (0110) we need to flip 4 bits.  Flipping means converting 0 to 1 and vice versa.

#include<bits/stdc++.h>
#define INT_SIZE 32
using namespace std;
typedef long long int ll;

bool isKthBitSet(int n, int k) {
    return (n & (1 << k)) != 0;
}

int bitFlipsRequired(int a, int b) {
    int count = 0;
    for(int i = 0; i < INT_SIZE; i++) {
        if(isKthBitSet(b, i) && !isKthBitSet(a, i)) count++;
        else if(!isKthBitSet(b, i) && isKthBitSet(a, i)) count++;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << bitFlipsRequired(a, b);
    }

    return 0;
}