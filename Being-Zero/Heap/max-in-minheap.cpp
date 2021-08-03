// Given a Min HEAP... Write Efficient Code to find the Maximum Element.
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

void minheapify(int *arr, int n, int i) {
    int smallest = i, lt = 2 * i + 1, rt = 2 * i + 2;
    if(lt < n && arr[lt] < arr[smallest]) smallest = lt;
    if(rt < n && arr[rt] < arr[smallest]) smallest = rt;
    if(smallest != i) {
        swap(arr[smallest], arr[i]);
        minheapify(arr, n, smallest);
    }
}

void buildheap(int *arr, int n) {
    for(int i = (n - 1) / 2; i >= 0; i--) 
        minheapify(arr, n, i);
}

int findMaxInMinHeap(int *a, int n) {
    buildheap(a, n);
    int maxnum = INT_MIN;
    for(int i = n / 2; i < n; i++) {
        maxnum = max(maxnum, a[i]);
    }
    return maxnum;
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
        cout << findMaxInMinHeap(arr, n) << endl;
    }

    return 0;
}