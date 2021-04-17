#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPowerOf4(int n) {
    if((n & (n - 1)) == 0) {
        int mask = 0x55555555;
        if((n & mask) != 0) return true;
    } 
    else return false;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    while(cin >> n) 
        cout << ((isPowerOf4(n)) ? "true" : "false") << endl;
    return 0;
}