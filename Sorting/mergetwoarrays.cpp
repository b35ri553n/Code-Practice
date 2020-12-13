#include <iostream>
using namespace std;

void mergeSortedArr(int *arr1, int *arr2, int m, int n) {
    int i = 0, j = 0;
    while(i < m && j < n) {
        if(arr1[i] < arr2[j]) cout << arr1[i++] << " ";
        else cout << arr2[j++] << " ";
    }
    while(i < m) cout << arr1[i++] << " ";
    while(j < n) cout << arr2[j++] << " ";
    return;
}

int main() {
    int arr1[] = {10, 15, 20, 40};
    int arr2[] = {5, 6, 6, 10, 15};
    int m = 4, n = 5;
    mergeSortedArr(arr1, arr2, m, n);
    return 0;
}