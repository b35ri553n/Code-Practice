// Given a string, check if it contains only vowels.

// Input Format

// Input contains a string S, consisting of lowercase and uppercase characters.

// Constraints

// 1 <= len(S) <= 100

// Output Format

// Print "Yes" if string contains only vowels, "No" Otherwise.

// Sample Input 0

// SmartInterviews
// Sample Output 0

// No
// Explanation 0

// Self Explanatory

#include <bits/stdc++.h>
using namespace std;

bool checkForVowels(string s) {
    string vowels = "aeiouAEIOU";
    for(char ch : s) {
        if(vowels.find(ch) == string::npos) return false;
    }
    return true;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    cout << ((checkForVowels(s)) ? "Yes" : "No");
 
    return 0;
}