// Given a sorted array where every element is repeated twice except one element. 
// Write a function that returns AKELA element in logN time and O(1) space.


#include<bits/stdc++.h>
using namespace std;

int findAkelaInSortedArr(int *arr, int n) {
    int l = 0, h = n - 1;
    while(l <= h) {
        // cout << l << " " << h << " ";
        int m = l + (h - l) / 2;
        // cout << m << "\n";
        if((m == 0 || m == n - 1) || (arr[m] != arr[m - 1] && arr[m] != arr[m + 1])) return arr[m];
        if(!(m & 1)) {
            if(arr[m] != arr[m + 1]) h = m - 1;
            else l = m + 1;
        } else {
            if(arr[m] != arr[m - 1]) h = m - 1;
            else l = m + 1;
        }
        
    }
    return -1;
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
        cout << findAkelaInSortedArr(arr, n) << "\n";
    }

    return 0;
}