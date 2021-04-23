// Perform Enqueue and Dequeue operations on a queue. Implement Queue and avoid using inbuilt library.

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
    vector<int> q;
    while(t--) {
        string operation;
        cin.ignore();
        cin >> operation;
        if(operation == "Enqueue") {
            int x;
            cin >> x;
            q.push_back(x);
        }
        else {
            if(q.size() == front) cout << "Empty" << endl;
            else {
                cout << q[front] << endl;
                front++;
            }
        }
    }

    return 0;
}