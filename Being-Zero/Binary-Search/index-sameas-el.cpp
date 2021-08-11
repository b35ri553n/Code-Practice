#include<bits/stdc++.h>
using namespace std;

int indexSameAsEl(int *arr, int n) {
    int l = 0, h = n - 1;
    while(l <= h) {
        int m = l + (h - l) / 2;
        if(arr[m] == m) return m;
        else if(arr[m] > m) h = m - 1;
        else l = m + 1;
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
        cout << indexSameAsEl(arr, n) << "\n";
    }

    return 0;
}