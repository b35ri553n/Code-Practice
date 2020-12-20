#include <iostream>
using namespace std;

int removeDups(int *arr, int size) {
    int repeated_count = 1;
    for(int i = 0; i < size; i++) {
        if(i < size - 1 && arr[i] == arr[i + 1])
            repeated_count++;
        else if(repeated_count > 1) {
            for(int j = i + 1; j < size; j++) 
                arr[j - repeated_count + 1] = arr[j];
            size = size - repeated_count + 1;
            i = repeated_count - 2;
            repeated_count = 1;
        }
    }
    return size;
}

int main() {
    int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    // int arr[] = {1, 1};
    int size = 10;
    int new_size = removeDups(arr, size);
    cout << new_size << endl;
    for(int i = 0; i < new_size; i++) 
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}