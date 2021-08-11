// You are given an integer array and a positive integer K. You have to tell if there exists a pair of integers in the given array such that ar[i]-ar[j]=K and i≠j.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isDiffPair(int *a, int n, int k) {
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        int l = i + 1, h = n - 1;
        while(l <= h) {
            int m = l + (h - l) / 2;
            if(a[m] - a[i] == k) return true;
            else if(a[m] - a[i] < k) l = m + 1;
            else h = m - 1;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        if(isDiffPair(a, n, k)) cout << "true" << "\n";
        else cout << "false" << "\n";
    }

    return 0;
}