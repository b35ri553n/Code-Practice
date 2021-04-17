// Given X and Y, print integral value of a Number N whose binary form has X bits as 1s followed by Y bits as 0s.
// 1 <= Test Cases <= 100
// 0 <= X, Y <= 60
// Note:  X+Y is guaranteed to be <=60

#include<bits/stdc++.h>
using namespace std;

long long int setKthBit(long long int n, int k) {
    return (n | (1LL << k));
}

long long int formNumber(int x, int y) {
    long long int n = 0;
    for(int i = y; i < x + y; i++) 
        n = setKthBit(n, i);
    return n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int x, y;
    while(cin >> x >> y) 
        cout << formNumber(x, y) << endl;

    return 0;
}