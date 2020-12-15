#include <iostream>
using namespace std;

void mergeSortedHalves(int *arr, int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int left[n1], right[n2];
    for(int i = 0; i < n1; i++)
        left[i] = arr[i + l];
    for(int j = 0; j < n2; j++)
        right[j] = arr[j + m + 1];
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        if(left[i] <= right[j]) arr[k++] = left[i++];   //<= ensures stability
        else arr[k++] = right[j++];
    }
    while(i < n1) arr[k++] = left[i++];
    while(j < n2) arr[k++] = right[j++];
    return;
}

void mergeSort(int *arr, int l, int r) {
    if(r > l) {     //we need at least 2 elements in arrays for divide and conquer algo
        int mid =  l + (r - l) / 2;  //same as l+r/2 but this prevents overflow for big values for l and r
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        mergeSortedHalves(arr, l, mid, r);
    }

}

int main() {
    int arr[] = {5, 8, 3, 2, 1, 9}; //385 129
    // int arr[] = {3, 8, 5, 1, 2, 9};
    mergeSort(arr, 0, 5);
    for(int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}