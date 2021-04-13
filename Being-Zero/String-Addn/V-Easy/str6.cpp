// Given a string, toggle the case of each character in the given string.

// Input Format

// Input contains a string S, consisting of lowercase and uppercase characters.

// Constraints

// 1 <= len(S) <= 100

// Output Format

// Print the toggled string.

// Sample Input 0

// abdBd
// Sample Output 0

// ABDbD
// Explanation 0

// Self Explanatory

#include <bits/stdc++.h>
using namespace std;

void toggleCase(string &s) {
    for(int i = 0; i < s.length(); i++) {
        if(islower(s[i])) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    toggleCase(s);
    cout << s;
 
    return 0;
}