#include <bits/stdc++.h>
using namespace std;

bool isNum(string num) {
    for(char digit : num) {
        if(!isdigit(digit)) return false;
    }
    return true;
}

int toNum(string num) {
    stringstream sso(num);
    int n;
    sso >> n;
    return n;
}

int evalPostfix(vector<string> exp) {
    stack<int> stk;
    stk.push(toNum(exp[0]));
    int n = exp.size();
    for(int i = 1; i < n; i++) {
        if(isNum(exp[i]))
            stk.push(toNum(exp[i]));
        else {
            int op1 = stk.top();
            stk.pop();
            int op2 = stk.top();
            stk.pop();
            if(exp[i] == "+") stk.push(op2 + op1);
            else if(exp[i] == "-") stk.push(op2 - op1);
            else if(exp[i] == "*") stk.push(op2 * op1);
            else if(exp[i] == "/") stk.push(op2 / op1);
        }
    }
    return stk.top();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string input, intermediate;
        vector<string> exp;
        getline(cin, input);
        stringstream sso(input);
        while(getline(sso, intermediate, ' '))
            exp.push_back(intermediate);
        cout << evalPostfix(exp) << endl;
    }

    return 0;
}