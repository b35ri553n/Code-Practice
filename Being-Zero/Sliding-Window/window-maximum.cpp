// Given an array of integers of size N and a window size K. 
// For each continuous window of size K, find the highest element in the window. Output the sum of the highest element of all the windows.
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

void printMaxInAllWindows(int *a, int n, int k) {
    int sum = 0;
    deque<int> dq;
    for(int i = 0; i < n; i++) {
        while(!dq.empty() && a[dq.back()] < a[i])
            dq.pop_back();
        dq.push_back(i);
        if(i >= k - 1) 
            sum += a[dq.front()]; 
        if(dq.front() == i - k + 1)
            dq.pop_front();
    }
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    // cin.ignore();
    while(t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        printMaxInAllWindows(arr, n, k);
    }

    return 0;
}