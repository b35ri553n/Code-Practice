// Given an array A of size N; we need to find the maximum average value among all subarrays of K size in the given array A.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

ll maxAvg(int *arr, int n, int k) {
    ll curr_sum = 0, max_sum = 0;
    for(int i = 0; i < k; i++) 
        max_sum += arr[i];
    curr_sum = max_sum;
    for(int i = k; i < n; i++) {
        curr_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
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
        double ans = (double)maxAvg(arr, n, k) / k;
        cout << fixed << setprecision(3) << ans << endl;
    }

    return 0;
}