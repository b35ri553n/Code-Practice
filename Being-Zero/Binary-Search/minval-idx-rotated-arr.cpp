// Given a sorted array of distinct integers that has been Rotated.
// Original Arr: [1, 2, 3, 4, 5, 6], Rotation at index 3 givesRotated Arr: [4, 5, 6, 1, 2, 3].
// Write function that take array returns the index at which min element is located. 

#include<bits/stdc++.h>
using namespace std;

int findMinValIdx(int *a, int n) {
    int l = 0, h = n - 1, m, minValIdx = l + (h - l) / 2;
    while(l < n) {
        m = l + (h - l) / 2;
        if(a[l] < a[minValIdx]) {
            minValIdx = l;
            l = m + 1;
        } else l = m;
    }
    return minValIdx;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        cout << findMinValIdx(arr, n) << "\n";
    }

    return 0;
}