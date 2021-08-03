// Given a sorted array, print permutations of elements of the array.

// Note:  All permutations of given array should be printed on same line, between two permutations there should be single space.  
// Elements of array should not have any space between them while printing.

// perms([1, 2, 3]) => 123 132 213 231 321 312

// Time Complexity:O(n*n!)

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool hasNextPermutation(int *arr, int n) {
    int i;
    for(i = n - 1; i > 0; i--) 
        if(arr[i - 1] < arr[i]) break;
    if(i == 0) {
        reverse(arr, arr + n);
        return false;
    }
    int immediate_large = INT_MAX, idx;
    for(int j = i; j < n; j++) {
        if(arr[j] > arr[i - 1] && arr[j] <= immediate_large) {
            immediate_large = arr[j];
            idx = j;
        }
    }
    swap(arr[i - 1], arr[idx]);
    reverse(arr + i, arr + n);
    return true;
}

void printPermutations(int *arr, int n) {
    do {
        for(int i = 0; i< n; i++)
            cout << arr[i];
        cout << " ";
    } while(hasNextPermutation(arr, n));
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
    printPermutations(arr, n);

    return 0;
}