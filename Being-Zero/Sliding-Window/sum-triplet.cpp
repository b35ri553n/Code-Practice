// You are given an integer array and a number K. 
// You have to tell if there exists i,j,k in the given array such that ar[i]+ar[j]+ar[k]=K, i≠j≠k.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

bool isTripletExist(int *a, int n, int k) {
    int sum = a[0] + a[1] + a[2];
    if(sum == k) return true;
    for(int i = 3; i < n; i++) {
        sum += a[i] - a[i - 3];
        if(sum == k) return true;
    }
    return false;
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
        cout << ((isTripletExist(arr, n, k)) ? "true" : "false") << endl;
    }

    return 0;
}