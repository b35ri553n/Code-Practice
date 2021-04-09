#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int getMaxSum(vector<int> v, int m) {
    priority_queue<int> pq;

    for(auto i : v) {
        pq.push(i);
    }

    int max_sum = 0;

    for(int i = 0; i < m; i++) {
        max_sum += pq.top();
        pq.pop();
    }

    return max_sum;
}

int main() {
    int m, n, s;

    cin >> n >> m;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    s = getMaxSum(v, m);

    return 0;
}