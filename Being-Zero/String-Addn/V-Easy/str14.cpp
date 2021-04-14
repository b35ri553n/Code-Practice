// A word is called WAVE word if casing of letters is AlTeRnAtE or aLtErNaTe.
// Given a word , tell if it is a WAVE word.

#include <bits/stdc++.h>
using namespace std;

bool isWave(string s) {
    if(islower(s[0])) {
        for(int i = 1; i < s.length() - 1; i += 2) {
            if(islower(s[i])) return false;
            if(isupper(s[i + 1])) return false;
        }
    }
    else if(isupper(s[0])) {
        for(int i = 1; i < s.length() - 1; i += 2) {
            if(isupper(s[i])) return false;
            if(islower(s[i + 1])) return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    std::cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        cout << ((isWave(s)) ? "YES" : "NO") << endl;
    }
}