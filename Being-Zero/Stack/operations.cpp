#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        stack<int> stk;
        while(n--) {
            int optype;
            cin >> optype;
            if(optype == 0) {
                int op;
                cin >> op;
                stk.push(op);
            }
            else {
                cout << stk.top() << " ";
                stk.pop();
            }
            
        }
        cout << endl;
    }

    return 0;
}