
#include<bits/stdc++.h>
using namespace std;

int findFreqHelper(int *arr, int x, int l, int h) {
    if(h < l) return -1;
    int m = l + (h - l) / 2;
    if(arr[m] == x) return m;
    else if(arr[m] > x) return findFreqHelper(arr, x, l, m - 1);
    else return findFreqHelper(arr, x, m + 1, h);
}

int findFreq(int *arr, int n, int x) {
    int i = findFreqHelper(arr, x, 0, n - 1);
    if(i == -1) return 0;
    int c = 1, left = i - 1, right = i + 1;
    while(left >= 0 && arr[left] == x)
        c++, left--;
    while(right < n && arr[right] == x)
        c++, right++;
    return c;
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
            cout << findFreq(arr, n, x) << " ";
        }
        cout << "\n";
        
    }

    return 0;
}