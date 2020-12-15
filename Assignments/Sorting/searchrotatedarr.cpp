#include <iostream>
using namespace std;

int searchRotatedArray(int arr[], int left, int right, int s) {
    // Write your code here
    int mid = left + (right - left) / 2;
    if(arr[mid] == s) return mid;
    else if(arr[mid] > arr[left]) {  //sorted array
        if(s >= arr[left] && s <= arr[mid]) return searchRotatedArray(arr, left, mid - 1, s);
        else return searchRotatedArray(arr, mid + 1, right, s);
    }
    else {  //circularly sorted array
        if(s >= arr[mid] && s <= arr[right]) return searchRotatedArray(arr, mid + 1, right, s);
        else return searchRotatedArray(arr, left, mid - 1, s);
    }
    
    return -2;
}

int main() {
    int size, left, right, s;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) 
        cin >> arr[i];
    cin >> left;
    cin >> right;
    cin >> s;
    cout << searchRotatedArray(arr, left, right, s);
    
    return 0;
}