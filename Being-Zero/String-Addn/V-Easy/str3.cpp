// Given a string, check if it contains only digits.

// Input Format

// Input contains a string S, consisting of ascii characters.

// Constraints

// 1 <= len(S) <= 100

// Output Format

// Print "Yes" if string contains only digits, "No" otherwise.

// Sample Input 0

// 123456786543
// Sample Output 0

// Yes
// Explanation 0

// Self Explanatory

// Sample Input 1

// "Smart-Interviews"
// Sample Output 1

// No
// Explanation 1

// Self Explanatory

#include <bits/stdc++.h>
using namespace std;

bool checkForDigits(string s) {
    for(char ch : s) {
        if(ch < 48 || ch > 57) return false;
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
    cout << ((checkForDigits(s)) ? "Yes" : "No");
 
    return 0;
}