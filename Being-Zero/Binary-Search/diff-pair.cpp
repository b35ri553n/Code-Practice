// You are given an integer array and a positive integer K. You have to tell if there exists a pair of integers in the given array such that ar[i]-ar[j]=K and i≠j.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void doesPairExist(int *arr, int n, int k) {
    int low  = 0, high = n - 1, mid;
    sort(arr, arr + n);
    while(low < high) {
        
    }
    cout << "False" << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    // cin.ignore();
    while(t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        doesPairExist(arr, n, k);
    }

    return 0;
}