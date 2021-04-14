// Count number of lowercase, uppercase letters

#include <bits/stdc++.h>
using namespace std;

void countLetters(string s) {
    int lcount = 0, ucount = 0;
    for(int  i = 0; i < s.length(); i++) {
        if(islower(s[i])) lcount++;
        else if(isupper(s[i])) ucount++;
    }
    cout << lcount << " " << ucount << endl;
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
        countLetters(s);
    }
}