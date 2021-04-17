// CBIT Prom Night is meant for couples. 

// Every couple gets a pair of T-Shirt wish same number written on both T-Shirts. 

// AKELA entered the party with a T-SHIRT that has unique number (There's no girl with that numbered T-Shirt).

// Given array of integers representing numbers written on T-Shirts, return the T-Shirt number of AKELA.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int findAkela(int *arr, int n) {
    int xorr = arr[0];
    for(int i = 1; i < n; i++)
        xorr = xorr ^ arr[i];
    return xorr;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        cout << findAkela(arr, n) << endl;
    }

    return 0;
}