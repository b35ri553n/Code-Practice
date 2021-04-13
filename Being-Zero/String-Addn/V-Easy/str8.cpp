// Given a string, compress the given string. See example for more details.

// Input Format

// Input contains a string S, consisting of lowercase and uppercase characters.

// Constraints

// 1 <= len(S) <= 100

// Output Format

// Print the compressed string.

// Sample Input 0

// aaaBBBBhhhekkL
// Sample Output 0

// a3B4h3e1k2L1
// Explanation 0

// In the given string, a is repeating for 3 times continuosly. So after compression it becomes a3.
// Similarly,
// B is repeating for 4 times - B4
// h is repeating for 3 times - h3
// e is repeating for 1 times - e1
// k is repeating for 2 times - k2
// L is repeating for 1 times - L1

#include <bits/stdc++.h>
using namespace std;

string compress(string s) {
    if(s.length() == 1) return s + "1";
    else if(s.length() == 0) return s;
    int j = 0, n = s.length();
    string s2 = "";
    for(int i = 1; i < n; i++) {
        if(s[i] != s[j]) { 
            s2 = s2 + s[j] + to_string(i - j);
            j = i;
            if(i == n - 1 && s[i] != s[i - 1]) 
                s2 = s2 + s[i] + "1";
        }
        else if(i == n - 1 && s[i] == s[i - 1]) 
            s2 = s2 + s[j] + to_string(i - j + 1);
    }
    return s2;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    getline(cin, s);
    cout << compress(s);
 
    return 0;
}