// Perform push and pop operations on a deque. Implement Deque and avoid using inbuilt library.

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
    int front = 0;
    int back = -1;
    vector<int> dq;
    while(t--) {
        string operation;
        cin.ignore();
        cin >> operation;
        if(operation == "push_front") {
            int x;
            cin >> x;
            dq.push_back(-1);
            int n = dq.size();
            for(int i = n - 1; i > 0; i--) {
                dq[i] = dq[i - 1];
            }
            dq[0] = x;
            back++;
        }
        else if(operation == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
            back++;
        }
        else if(operation == "pop_front") {
            if(back == -1) cout << "Empty" << endl;
            else {
                cout << dq[front] << endl;
                int n = dq.size();
                for(int i = 0; i < n - 1; i++) {
                    dq[i] = dq[i + 1];
                }
                dq.pop_back();
                back--;
            }
        }
        else {
            if(back == -1) cout << "Empty" << endl;
            else {
                cout << dq[back--] << endl;
                dq.pop_back();
            }
        }
    }

    return 0;
}