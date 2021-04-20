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
        deque<int> dq;
        while(n--) {
            string optype;
            cin >> optype;
            if(optype == "insert_front") {
                int op;
                cin >> op;
                dq.push_front(op);
            }
            else if(optype == "insert_back") {
                int op;
                cin >> op;
                dq.push_back(op);
            }
            else if(optype == "remove_back"){
                if(!dq.empty()) {cout << dq.back() << " ";
                dq.pop_back();}
                else cout << "EMPTY ";
                
            }
            else if(optype == "remove_front"){
                if(!dq.empty()) {cout << dq.front() << " ";
                dq.pop_front();}
                else cout << "EMPTY ";
                
            }
            else if(optype == "print_back"){
                if(dq.empty()) cout << "EMPTY ";
                else cout << dq.back() << " ";
            }
            else if(optype == "print_front"){
                if(dq.empty()) cout << "EMPTY ";
                else cout << dq.front() << " ";
            }
        }
        cout << endl;
    }

    return 0;
}