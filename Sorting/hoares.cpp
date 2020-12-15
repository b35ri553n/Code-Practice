#include <iostream>
using namespace std;

int hoaresPartition(int *arr, int low, int high) {
    int i = low - 1, j = high + 1, pivot = arr[low];
    while(true) {
        do {
            i++;
        } while(arr[i] < pivot);
        do {
            j--;
        } while (arr[j] > pivot);
        if(i >= j) return j;
        swap(arr[i], arr[j]);
    }
}

int main() {
    int arr[] = {5, 2, 4, 1, 3, 2, 7, 6, 9};
    int division = hoaresPartition(arr, 0, 8);
    cout << division << endl;
    for(int i = 0; i < 9; i++)
        cout << arr[i] << " ";
    return 0;
}