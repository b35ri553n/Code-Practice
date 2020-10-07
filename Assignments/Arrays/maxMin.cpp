#include <iostream>
using namespace std;

void maxMin(int arr[], int size) {
    // Write your code here
    int temp[size];
    int *last = &arr[size - 1], *first = &arr[0];
    for(int i = 0; i < size; i++) {
        if(i % 2 == 0) {
            temp[i] = *last;
            last--;
        }
        else {
            temp[i] = *first;
            first++;
        }
    }
    cout << "Array after min/max: ";
    for (int i = 0; i < size; i++)
        cout << temp[i] << " ";
    cout << endl;
}

int main() {
    int size = 6;
    int arr[size] = {1,2,3,4,5,6};
    cout << "Array before min/max: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    maxMin(arr, size);
}