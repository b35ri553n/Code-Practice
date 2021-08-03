// A person't password string S is given to us, where sequence of characters in S and actual password is exactly same but we aren't sure 
// about is whether alphabets in actual password are lowercase or uppercase (it can be any).  Generate all password combinations possible.
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
#define N 1000000
// for(int i = 0; i < n; i++) 
ll dp[N + 1];

ll modSum(ll a, ll b) {
    return (a % M + b % M) % M;
}

ll modProd(ll a, ll b) {
    return (a % M * b % M) % M;
}

ll modDiff(ll a, ll b) {
    return (a % M - b % M + M) % M;
}

string n;
string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
char path[10];

void printPossibleSMS(int i) {
    if(i == n.length()) {
        for(int j = 0; j < n.length(); j++)
            cout << path[j];
        cout << " ";
        return;
    }
    for(int j = 0; j < keypad[n[i] - '0'].length(); j++) {
        path[i] = keypad[n[i] - '0'][j];
        printPossibleSMS(i + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    cin.ignore();
    // for(int i = 0; i <= N; i++) 
    //     dp[i] = -1;
    while(t--) {
        cin >> n;
        printPossibleSMS(0);
        cout << "\n";
    }

    return 0;
}