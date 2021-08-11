// Given a sorted array of distinct elements and a new element to be inserted, return the index at which it should be inserted so that end result of array is still sorted.  
// Note:  We don't need to insert the element, we just need to print position where element needs to be inserted.  
// If there is more than one answer - print the maximum index where element needs to be inserted.
#include<bits/stdc++.h>
using namespace std;

int sortedPos(int *a, int n, int x) {
    int l = 0, h = n - 1;
    while(l <= h) {
        int m = l + (h - l) / 2;
        if(a[m] <= x) l = m + 1;
        else h = m - 1;
    }
    return h + 1;
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
        int q;
        cin >> q;
        for(int i = 0; i < q; i++) {
            int x;
            cin >> x;
            cout << sortedPos(arr, n, x) << " ";
        }
        cout << "\n";
    }

    return 0;
}