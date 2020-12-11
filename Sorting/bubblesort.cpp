#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size) {
    bool swapped = true;       
    for(int i = 0; i < size - 1; i++) {
        swapped = false; 
        for(int j = 0; j <= size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }      
        }
        if(!swapped)    
            break;
    }
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements: ";
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Sorted array is: ";
    bubbleSort(arr, size);
    for(auto i: arr)
        cout << i << " ";
    return 0;
}
