#include <iostream>
using namespace std;

int* removeEven(int *&arr, int size) {
    int oddCount = 0;
    if(size == 0) return NULL;
    if(size == 1 && arr[0] % 2) return arr;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2) oddCount++;
    }
    int *odd_arr = new int[oddCount];
    oddCount = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2) odd_arr[oddCount++] = arr[i];
    }  
    return odd_arr;
}

int main() {
    int *arr = new int[7];
    for(int i = 0; i < 7; i++)
        cin >> arr[i];
    int *no_odd = removeEven(arr, 7);
    for(int i = 0; i < 3; i++)
        cout << no_odd[i] << " ";
    delete [] arr;
    delete [] no_odd;
    return 0;
}