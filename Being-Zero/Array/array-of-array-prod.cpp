// Given an array arr[] of n integers, construct a Product Array prod[] (of same size) such that prod[i] is equal to the product of all the elements of arr[] except arr[i]. 
// Solve it without division operator in O(n) time.
#include<bits/stdc++.h>
using namespace std;

// vector<int> getProdArr(int *arr, int n) {
//     if(n == 0 || n == 1) return {};
//     vector<int> ans(n);
//     vector<int> pre(n), suf(n);
//     pre[0] = arr[0];
//     for(int i = 1; i < n; i++)
//         pre[i] = pre[i - 1] * arr[i];
//     suf[n - 1] = arr[n - 1];
//     for(int i = n - 2; i >= 0; i--)
//         suf[i] = suf[i + 1] * arr[i];
//     for(int i = 0; i < n; i++) {
//         if(i == 0) ans[i] = suf[i + 1];
//         else if(i == n - 1) ans[i] = pre[i - 1];
//         else ans[i] = pre[i - 1] * suf[i + 1];
//     }
//     return ans;
// }

vector<int> getProdArr(int *arr, int n) {
    if(n == 0 || n == 1) return {};
    int suf = arr[n - 1];
    vector<int> res(n);
    res[0] = 1;
    for(int i = 1; i < n; i++) 
        res[i] = res[i - 1] * arr[i - 1];
    for(int i = n - 2; i >= 0; i--) {
        res[i] *= suf;
        suf *= arr[i];
    }
    return res;
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
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> ans = getProdArr(arr, n);
        for(int i : ans) {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}