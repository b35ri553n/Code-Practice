// Given an array of integers and a number K, check if there exist a pair of indices i,j s.t. a[i] + a[j] = K and i!=j.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Naive Approach
void doesPairExist(int *arr, int n, int k) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++)
            {
                if(arr[i] + arr[j] == k) {
                cout << "True" << endl;
                return;
            }
        }
    }
    cout << "False" << endl;
    return;
}

void doesPairExist(int *arr, int n, int k) {
    int low  = 0, high = n - 1, mid;
    sort(arr, arr + n);
    while(low < high) {
        if(arr[low] + arr[high] == k) {
            cout << "True" << endl;
            return;
        }
        else if(k < arr[low] + arr[high]) high--;
        else low++;
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