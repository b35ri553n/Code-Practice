// Problem Link: https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int countFreq(string pile, char i) {
    int count = 0;
    for(char c : pile) {
        if(c == i) count++;
    }
    return count;
}

bool hasMissingLetter(string host, string guest, string pile) {
    if(host.length() + guest.length() != pile.length()) return true;
    else {
        vector<int> v(26, 0), v1(26, 0);
        for(char i : host) {
            v[i - 65]++;
        }
        for(char i : guest) {
            v[i - 65]++;
        }
        for(char i : pile) {
            v1[i - 65]++;
        }
        if(v == v1) return false;
        return true;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string host, guest, pile;
    cin >> host;
    cin >> guest;
    cin >> pile;
    if(hasMissingLetter(host, guest, pile)) cout << "NO";
    else cout << "YES";
}