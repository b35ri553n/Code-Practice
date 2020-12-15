#include <iostream>
using namespace std;

void countSort(int *arr, int n, int k) {    //k is the range of elements in arr
    int count[k];   //stores the frequency of element i at index i
    for(int i = 0; i < k; i++) 
        count[i] = 0;
    for(int i = 0; i < n; i++) 
        count[arr[i]]++;
    int index = 0;
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < count[i]; j++)
            arr[index++] = i;
    }
}

int main() {
    int arr[] = {1, 4, 4, 1, 0, 1};
    countSort(arr, 6, 5);   //rangle is [0, 5)
    for(auto i: arr)
        cout << i << " ";
    return 0;
}