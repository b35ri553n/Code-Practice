// Given a string, compute the length of longest proper prefix which is same as the suffix of the given string.
// input: smartintsmart
// output: 5

#include<bits/stdc++.h>
using namespace std;

int prefixSuffixLen(string s) {
    int n = s.length();
    if(n < 2) return 0;
    for(int i = n / 2; i >= 0; i--) {
        string prefix = s.substr(0, i);
        string suffix = s.substr(n - i, n);
        if(prefix == suffix) return prefix.length();
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;
    cout << prefixSuffixLen(s);

    return 0;
}