// Given a string of characters, find the first repeating character.
// note: i/o: smartinterviews o/p:s (not t)
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// char firstRepChar(string s) {
//     unordered_set<char> rep;
//     for(int i = 0; i < s.length(); i++) {
//         if(rep.find(s[i]) != rep.end()) return s[i];
//         else rep.insert(s[i]);
//     }
//     return '.';
// }

char firstRepChar(string s) {
    int ans = INT_MAX;
    int leftmost_pos[256];
    for(int i = 0; i < 256; i++) leftmost_pos[i] = -1;
    for(int i = 0; i < s.length(); i++) {
        if(leftmost_pos[s[i]] == -1) leftmost_pos[s[i]] = i;
        else ans = min(ans, leftmost_pos[s[i]]);
    }
    return (ans == INT_MAX) ? '.' : s[ans];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        cin >> s;
        cout << firstRepChar(s) << endl;
    }

    return 0;
}