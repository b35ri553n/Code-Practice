// Given a string, print count of vowels and consonants in the string.

// Input Format

// Input contains a string S, consisting of lowercase and uppercase characters.

// Constraints

// 1 <= len(S) <= 100

// Output Format

// Print count of vowels and consonants in the given string, separated by space.

// Sample Input 0

// aBxbbiAasPw
// Sample Output 0

// 4 7
// Explanation 0

// Self Explanatory

#include <bits/stdc++.h>
using namespace std;

void countVowelsAndConsonants(string s) {
    int vowels = 0, consonants = 0;
    for(char ch : s) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;
        else consonants++;
    }
    cout << vowels << " " << consonants;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    countVowelsAndConsonants(s);
 
    return 0;
}