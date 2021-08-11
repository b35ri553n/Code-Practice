
#include<bits/stdc++.h>
using namespace std;

int bsearch(int *arr, int l, int h, int x) {
    if(h < l) return -1;
    int m = l + (h - l) / 2;
    if(arr[m] == x) return m;
    if(arr[l] <= arr[m]) {
        if(x >= arr[l] && x <= arr[m]) return bsearch(arr, l, m - 1, x);
        return bsearch(arr, m + 1, h, x);
    }
    if(x >= arr[m] && x <= arr[h]) return bsearch(arr, m + 1, h, x);
    return bsearch(arr, l, m - 1, x); 
}

int findNum(int *arr, int n, int x) {
    return bsearch(arr, 0, n - 1, x);
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
            cout << findNum(arr, n, x) << " ";
        }
        cout << "\n";
    }

    return 0;
}