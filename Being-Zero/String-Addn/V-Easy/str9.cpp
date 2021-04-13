// Given 2 strings, check if they are anagrams. An anagram is a rearrangement of the letters of one word to form another word. In other words, some permutation of string A must be same as string B.

// Input Format

// First line of input contains T - number of test cases. Its followed by T lines, each line containing 2 space separated strings.

// Constraints

// 10 points
// 1 <= T <= 100
// 1 <= len(S) <= 103
// 'a' <= S[i] <= 'z'

// 40 points
// 1 <= T <= 100
// 1 <= len(S) <= 105
// 'a' <= S[i] <= 'z'

// Output Format

// For each test case, print True/False, separated by newline.

// Sample Input 0

// 4
// a a
// b h
// stop post
// hi hey
// Sample Output 0

// True
// False
// True
// False
// Explanation 0

// Self Explanatory

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 != s2) return false;
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << ((isAnagram(s1, s2)) ? "True" : "False") << endl;
    }
 
    return 0;
}