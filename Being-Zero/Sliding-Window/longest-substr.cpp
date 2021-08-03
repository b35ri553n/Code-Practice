// Given a string S, find the length of longest substring that comprises of all unique characters.

#include<bits/stdc++.h>
using namespace std;

int countDistinctChars(string s) {
    int st = 0, e = 0, wsize = 0, n = s.size();
    unordered_set<char> stt;
    while(e < n) {
        if(stt.find(s[e]) != stt.end()) {
            wsize = max(wsize, (e - st));
            while(s[st] != s[e]) {
                s.erase(s[st++]);
            }
            s.erase(s[st++]);
        }
        stt.insert(s[e]);
        if(e == n - 1) {wsize = max(wsize, (e - st)); break;}
        e++;
    }
    return wsize;
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
        cout << countDistinctChars(s) << endl;
    }

    return 0;
}