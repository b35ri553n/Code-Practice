// Given an integer array, print the median for the sub-array 0 to i, for every i, 0<=i<=N-1.
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

void printMedian(int *arr, int n) {
    priority_queue<int> maxpq;
    priority_queue<int, vector<int>, greater<int>> minpq;
    for(int i = 0; i < n; i++) {
        if(maxpq.empty() || maxpq.top() > arr[i])
            maxpq.push(arr[i]);
        else minpq.push(arr[i]);
        if(maxpq.size() > minpq.size() + 1) {
            minpq.push(maxpq.top());
            maxpq.pop();
        } else if(minpq.size() > maxpq.size() + 1) {
            maxpq.push(minpq.top());
            minpq.pop();
        }
        if(minpq.size() > maxpq.size()) cout << minpq.top() << " ";
        else cout << maxpq.top() << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    // cin.ignore();
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        printMedian(arr, n);
    }

    return 0;
}