// Check for case insentitive anagrams

#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string s1, string s2) {
    for(int i = 0; i < s1.length(); i++)
        s1[i] = tolower(s1[i]);
    for(int i = 0; i < s2.length(); i++)
        s2[i] = tolower(s2[i]);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 != s2) return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << ((areAnagrams(s1, s2)) ? "true" : "false");
    }
}