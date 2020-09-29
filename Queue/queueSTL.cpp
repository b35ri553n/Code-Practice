#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    // cout << q.front() << " " << q.back() << endl;       //10 30
    // q.pop();
    // cout << q.front() << " " << q.back() << endl;       //20 30
    cout << q.size() << endl;
    while (!q.empty()) {
        cout << q.front() << " " << q.back() << endl;
        q.pop();
    }
    return 0;
}