// Given array of size n, count all distinct elements in each subarray with size k.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

void printDistinctEls(int *a, int n, int k) {
    unordered_map<int, int> m;
    int freq = 0;
    for(int i = 0; i < k; i++) {
        if(!m[a[i]]) freq++;
        m[a[i]]++;
    }
    cout << freq << " ";
    for(int i = 1; i <= n - k; i++) {
        m[a[i - 1]]--;
        if(!m[a[i - 1]]) freq--;
        if(!m[a[i + k - 1]]) freq++;
        m[a[i + k - 1]]++;
        cout << freq << " ";
    }
    cout << endl;
    return;
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
        printDistinctEls(arr, n, k);
        // int q;
        // cin >> q;
        // int arr2[q];
        // for(int i = 0; i < q; i++) 
        //     cin >> arr2[i];
        // for(int i = 0; i < q; i++) 
        //     printDistinctEls(arr, n, arr2[i]);
    }

    return 0;
}