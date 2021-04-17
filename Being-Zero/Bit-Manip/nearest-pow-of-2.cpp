// Given a number N, Write a program to find a number which is greater than or equal to N and is a smallest power of 2.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int countSetBits(int n) {
    int count= 0; 
    while(n != 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int nearestPow(int n) {
    if(countSetBits(n) == 1) return n;
    else {
        //pos of leftmost set bit
        int k = (int)log2(n);
        return (1 << (k + 1));
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << nearestPow(n) << endl;
    }

    return 0;
}