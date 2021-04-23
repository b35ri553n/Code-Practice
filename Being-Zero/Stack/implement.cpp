// Perform push and pop operations on stack. Implement Stacks and avoid using inbuilt library.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    int top = -1;
    vector<int> st;
    while(t--) {
        string operation;
        cin.ignore();
        cin >> operation;
        if(operation == "push") {
            int x;
            cin >> x;
            st.push_back(x);
            top++;
        }
        else {
            if(top == -1) cout << "Empty" << endl;
            else {
                cout << st[top--] << endl;
                st.pop_back();
            }
        }
    }

    return 0;
}