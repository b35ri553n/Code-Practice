// Given a sentence containing only uppercase/lowercase english alphabets and spaces, you have to count the number of words, vowels and consonants.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void printCount(string s) {
    int words = 0, vowels = 0, consonants = 0;
    stringstream sso(s);
    string word;
    while(sso >> word) {
        words++;
        for(char ch : word) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else consonants++;
        }
    }
    cout << words << " " << vowels << " " << consonants << endl;
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
        getline(cin, s);
        printCount(s);
    }

    return 0;
}