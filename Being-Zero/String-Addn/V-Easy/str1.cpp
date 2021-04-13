// Given a sentence S and a character ch, count occurrence of the given character in the sentence

// Input Format

// First line of input contains a sentence - S and second line of input contains a single lowercase character - ch.

// Constraints

// 1 <= len(S) <= 100

// Output Format

// Print count of the given character in the sentence.

// Sample Input 0

// Data Structures & Algorithms
// s
// Sample Output 0

// 2
// Explanation 0

// Self Explanatory

#include <bits/stdc++.h>
using namespace std;

int getCountofChar(string s, char ch) {
    int count  = 0;
    for(char i : s) {
        if(i == ch) count++;
    }
    return count;
}
 
int main()
{
    string s;
    getline(cin, s);
    char ch;
    cin >> ch;
    cout << getCountofChar(s, ch);
 
    return 0;
}