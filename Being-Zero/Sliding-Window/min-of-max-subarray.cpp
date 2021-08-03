// There is an array of length n. Print the minimum of all the maximum values of all the contiguous subarrays of the array of length k.
// 1
// 5 2
// 5 8 2 1 9
// from each index take a sub array of length 2: [5,8] [8,2] [2,1] [1,9]
// answer will be minimum of {8,8,2,9}=2

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

int minOfMaxSubarr(int *a, int n, int k) {
    int minEl = INT_MAX;
    deque<int> dq;
    for(int i = 0; i < n; i++) {
        while(!dq.empty() && a[dq.back()] < a[i])
            dq.pop_back();
        dq.push_back(i);
        if(i >= k - 1) 
            minEl = min(minEl, a[dq.front()]); 
        if(dq.front() == i - k + 1)
            dq.pop_front();
    }
    return minEl;
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
        cout << minOfMaxSubarr(arr, n, k) << endl;
    }

    return 0;
}
