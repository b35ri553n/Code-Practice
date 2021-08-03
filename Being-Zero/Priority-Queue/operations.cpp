// Given few operations on PriorityQueue, NAME (code) are given below

// PUSH (0), TOP (1), COUNT (2), POP(3) 

// Perform given set of operations.

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
        // minheap
        priority_queue<int, vector<int>, greater<int>> pq;
        // maxheap
        // priority_queue<int> pq;
        while(n--) {
            int optype;
            cin >> optype;
            if(optype == 0) {
                int op;
                cin >> op;
                pq.push(op);
            }
            else if(optype == 1) {
                cout << pq.top() << " ";
            } 
            else if(optype == 2) {
                cout << pq.size() << " ";
            }
            else {
                pq.pop();
            }
        }
        cout << endl;
    }

    return 0;
}