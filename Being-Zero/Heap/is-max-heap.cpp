// Given an array, return True if it represents MAX-HEAP, false otherwise.
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
#define N 1000000
// for(int i = 0; i < n; i++) 
ll dp[N + 1];

ll modSum(ll a, ll b) {
    return (a % M + b % M) % M;
}

ll modProd(ll a, ll b) {
    return (a % M * b % M) % M;
}

ll modDiff(ll a, ll b) {
    return (a % M - b % M + M) % M;
}

bool isMaxHeap(int *arr, int n) {
    // FIXME: first check if complete binary tree or not
    for(int i = n / 2 - 1; i >= 0; i = (i - 1) / 2) {
        if(arr[2 * i + 1] > arr[i] || arr[2 * i + 2] > arr[i])
            return false;
        if(i == 0) break;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    // cin.ignore();
    // for(int i = 0; i <= N; i++) 
    //     dp[i] = -1;
    while(t--) {
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        if(isMaxHeap(arr, n)) cout << "true" << endl;
        else cout << "false" << endl;
    }

    return 0;
}