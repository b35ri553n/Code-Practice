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
        queue<int> q;
        while(n--) {
            int optype;
            cin >> optype;
            if(optype == 0) {
                int op;
                cin >> op;
                q.push(op);
            }
            else {
                cout << q.front() << " ";
                q.pop();
            }
            
        }
        cout << endl;
    }

    return 0;
}