// Hexadecimal number system is base 16 number system - its digits are 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F.  If you are given a hexadecimal digit.  
// You are required to print it three folds:  print the digit back, print its integral equivalent, also print its ascii value.
// Hex digit will be one of 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F 

#include <bits/stdc++.h>
using namespace std;

void gameOfHex(char ch) {
    if(ch >= 48 && ch <= 57) {
        cout << ch << " " << ch << " " << (int)ch << endl;
    } else {
        cout << ch << " " << (int)(ch - 55) << " " << (int)ch << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    std::cin.ignore();
    while(t--) {
        char ch;
        cin >> ch;
        gameOfHex(ch);
    }
}