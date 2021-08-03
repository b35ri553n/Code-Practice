// A person't password string S is given to us, where sequence of characters in S and actual password 
// is exactly same but we aren't sure about is whether alphabets in actual password are lowercase or uppercase (it can be any).  
// Generate all password combinations possible.
// Expected Time Complexity: O(2^n)
// Allowed Space Complexity: O(n)

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

string s;
int n;
char *pw = new char(10);

void allPossiblePasswords(int i) {
    if(i == n) {
        for(int j = 0; j < n; j++)
            cout << pw[j]; 
        cout << " ";
        return;
    }
    if(isdigit(s[i])) {
        pw[i] = s[i];
        allPossiblePasswords(i + 1);
    } else if(isalpha(s[i])) {
        pw[i] = tolower(s[i]);
        allPossiblePasswords(i + 1);
        pw[i] = toupper(s[i]);
        allPossiblePasswords(i + 1);
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
        cin >> s;
        n = s.length();
        allPossiblePasswords(0);
        cout << "\n";
    }

    return 0;
}