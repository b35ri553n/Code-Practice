// Given a list of words and their meanings (each word and meaning is a simple string without any spaces)

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    cin.ignore();
    unordered_map<string, string> m;
    while(n--) {
        string word, meaning;
        cin >> word >> meaning;
        m[word] = meaning;
    }
    int q;
    cin >> q;
    while(q--) {
        string word;
        cin >> word;
        cout << m[word] << endl;
    }
    return 0;
}