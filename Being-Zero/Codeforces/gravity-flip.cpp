// Problem Link: https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void getInitialConfig(int *arr, int n) {
    sort(arr, arr + n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    getInitialConfig(arr, n);
}