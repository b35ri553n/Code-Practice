// Given an integer - N, print a string with the letter 'o' repeated for N times in the word Go...od.

// Input Format

// First and only line of input contains a single integer N.

// Constraints

// 0 <= N<= 100

// Output Format

// Print the word Go..od with letter 'o' repeated N times.

// Sample Input 0

// 4
// Sample Output 0

// Gooood
// Explanation 0

// Self Explanatory

#include <bits/stdc++.h>
using namespace std;

void printGood(int n) {
    string s = "G";
    while(n--) {
        s += "o";
    }
    s += "d";
    cout << s;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    printGood(n);
 
    return 0;
}