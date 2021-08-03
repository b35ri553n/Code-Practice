// Given an array A of size N.  Given sum S, tell if there is any subset of array having given sum S?
// 1 <= T <= 10
// 1 <= N <= 10
// INT_MIN <= A[i] <= INT_MAX

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isSubsetWithSum(int *arr, int n, int s) {
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        cout << ((isSubsetWithSum(arr, n, s)) ? "YES" : "NO") << endl;
    }

    return 0;
}