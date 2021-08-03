// Given N-Bit Binary String having 0s, 1s and ? (wildcard).  
// Generate and Print all the Binary Strings that are possible by replacing given wildcard with 0 and 1.
// For 1??0, Output should be:  1000 1010 1100 1110 

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int m = 0;

void helper(char n[], int i) {
    if(i == m) {
        for(int j = 0; j < m; j++)
            cout << n[j];
        cout << " ";
        return;
    }
    if(n[i] == '?') {
        n[i] = '0';
        helper(n, i + 1);
        n[i] = '1';
        helper(n, i + 1);
        n[i] = '?';     // backtrack
    }
    else helper(n, i + 1);
}

void printBinString(char n[]) {
    m = strlen(n);
    m--;
    helper(n, 0);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    char n[] = {'1', '?', '?', '0'};
    cout << strlen(n) << endl;
    printBinString(n);

    return 0;
}