// Given an array of integers, return the number of distinct absolute values among the elements of the array. 

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

int absoluteDistinctValues(int a[], int n) {
	unordered_set<int> s;
    for(int i = 0; i < n; i++) 
        a[i] = abs(a[i]);
    for(int i = 0; i < n; i++) 
        s.insert(a[i]);
    return s.size();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        cout << absoluteDistinctValues(arr, n) << endl;
    }
    return 0;
}