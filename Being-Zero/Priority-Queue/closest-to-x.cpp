// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. 
// The result should also be sorted in ascending order.
// An integer a is closer to x than an integer b if:
// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b

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

int x;

// approach 1 tc: nlogn+klogk+klogk+k sc:2n+k
void findKClosestToX1(int *arr, int n, int k, int x) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minpq;
    for(int i = 0; i < n; i++) {
        minpq.push(make_pair(abs(arr[i] - x), arr[i]));
    }
    
    vector<int> ans;
    for(int i = 0; i < k; i++) {
        ans.push_back(minpq.top().second);
        minpq.pop();
    }
    sort(ans.begin(), ans.end());
    for(int i : ans)
        cout << i << " ";
    cout << endl;
}

// approach 2 tc: n+nlogn+(n-k)+(n-k)log(n-k)+k sc:n
bool cmp(int a, int b) {
    if(abs(a - x) != abs(b - x)) return abs(a - x) < abs(b - x);
    else return a < b;
}

void findKClosestToX2(int *arr, int n, int k) {
    vector<int> sortedArr;
    for(int i = 0; i < n; i++) 
        sortedArr.push_back(arr[i]);
    sort(sortedArr.begin(), sortedArr.end(), cmp);
    for(int i = 0; i < n - k; i++)
        sortedArr.pop_back();
    sort(sortedArr.begin(), sortedArr.end());
    for(int i : sortedArr) 
        cout << i << " ";
    cout << endl;
}

void findKClosestToX1(int *arr, int n, int k, int x)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n, k;
    cin >> t;
    // cin.ignore();
    // for(int i = 0; i <= N; i++) 
    //     dp[i] = -1;
    while(t--) {
        cin >> n >> k >> x;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        findKClosestToX2(arr, n, k);
    }

    return 0;
}