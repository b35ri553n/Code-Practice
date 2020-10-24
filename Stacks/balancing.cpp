#include <bits/stdc++.h>
using namespace std;

bool matching(char a, char b) {
    return ((a == ')' && b == '(') || (a == ']' && b == '[') || (a == '}' && b == '{'));
}

bool isBalanced(string str) {
    stack <char> s;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{') //push if bracket is opening
            s.push(str[i]);
        else {
            if(s.empty()) return false; //for cases like )(
            else if (!matching(str[i], s.top())) return false; //for cases for (()))
            else s.pop(); //if matching closing bracket is found, pop out opening bracket
        }
    }
    return (s.empty()); //for cases for ((())
}

int main() {
    string str1 = "[](())", str2 = "((())", str3 = "[({})]", str4 = "({)}";

    if(isBalanced(str1)) cout << str1 << " is balanced" << endl;
    else cout << str1 << " is not balanced" << endl;
    if(isBalanced(str2)) cout << str2 << " is balanced" << endl;
    else cout << str2 << " is not balanced" << endl;
    if(isBalanced(str3)) cout << str3 << " is balanced" << endl;
    else cout << str3 << " is not balanced" << endl;
    if(isBalanced(str4)) cout << str4 << " is balanced" << endl;
    else cout << str4 << " is not balanced" << endl;

    return 0;
}