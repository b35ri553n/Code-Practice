// Count number of vowels

#include <bits/stdc++.h>
using namespace std;

int countVowels(string s) {
    int count = 0;
    for(char ch : s) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count++;
    }
    return count;
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
        cout << countVowels(s) << endl;
    }
}