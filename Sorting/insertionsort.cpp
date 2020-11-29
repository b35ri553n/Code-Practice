#include <iostream>
using namespace std;

void iSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i;
        for(; j > 0 && arr[j - 1] > key; j--)
            arr[j] = arr[j - 1];
        arr[j] = key;
    }
}

int main() {
    int arr[] = {20, 40, 50, 60, 10, 30};
    int n = 6;
    iSort(arr, n);
    for(auto i: arr)
        cout << i << " ";
    return 0;
}