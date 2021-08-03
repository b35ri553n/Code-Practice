// Given an array of integers, answer queries of the form: [i, j] : Print the sum of array elements from A[i] to A[j], both inclusive.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

// void printSum(int *a, int n, int i, int j) {
//     int sum = 0;
//     for(int s = i; s <= j; s++) {
//         sum += a[s];
//     }
//     cout << sum << endl;
//     return;
// }

void preprocess(int *a, int n) {
    for(int i = 1; i < n; i++) {
        a[i] += a[i - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // cin.ignore();

    int n, q, i, j;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    preprocess(arr, n);
    cin >> q;
    while(q--) {
        cin >> i >> j;
        cout << ((i == 0) ? arr[j] : arr[j] - arr[i - 1]);
        if(q != 0) cout << endl;
    }
    return 0;
}