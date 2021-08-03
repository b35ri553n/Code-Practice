// Given an un-ordered array, Make it MAX-HEAP.
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

void maxheapify(int *arr, int n, int i) {
    int biggest = i, lt = 2 * i + 1, rt = 2 * i + 2;
    if(lt < n && arr[lt] > arr[biggest]) biggest = lt;
    if(rt < n && arr[rt] > arr[biggest]) biggest = rt;
    if(biggest != i) {
        swap(arr[biggest], arr[i]);
        maxheapify(arr, n, biggest);
    }
}

void buildheap(int *arr, int n) {
    for(int i = (n - 1) / 2; i >= 0; i--) 
        maxheapify(arr, n, i);
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
        buildheap(arr, n);
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}