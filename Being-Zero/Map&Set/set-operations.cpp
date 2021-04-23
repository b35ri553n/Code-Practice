// Given Set Data Structure and three operations - ADD, CHECK and REMOVE - Perform following operations.
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
    while(t--) {
        int n;
        cin >> n;
        set<int> s;
        while(n--) {
            int optype;
            cin >> optype;
            if(optype == 0) {
                int op;
                cin >> op;
                s.insert(op);
            }
            else if(optype == 1) {
                int op;
                cin >> op;
                if(s.find(op) != s.end()) cout << "true ";
                else cout << "false ";
                
            } else {
                int op;
                cin >> op;
                if(s.find(op) != s.end()) s.erase(s.find(op));
            }
            
        }
        cout << endl;
    }

    return 0;
}