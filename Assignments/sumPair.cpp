#include <iostream>
using namespace std;

//Return 2 elements of arr that sum to the given value
int * findSum(int arr[], int value, int size) {
    // Sorting function is prepended as sort(arr, low, high)
    for(int i = 0; i < size; i++) {
        int to_find = value - arr[i];
        for(int j = i + 1; j < size; j++) {
            if(arr[j] == to_find) {
                if (!i) {
                    arr[1] = arr[j];
                    arr[0] = arr[i];
                }
                else {
                    arr[0] = arr[i];
                    arr[1] = arr[j];
                }
                break;
            }
        }
    }
    // Write your code here
    return arr;
}

int main() {
    int size = 5, value = 11;
    int arr[size] = {2, 4, 5, 7, 8};

    if (size > 0) {
        int * arr2 = findSum(arr, value, size);
        int num1 = arr2[0];
        int num2 = arr2[1];
        // cout << num1 << " " << num2;

        if ((num1 + num2) != value)
            cout << "Not Found" << endl;
        else {
            cout << "Number 1 = " << num1 << endl;
            cout << "Number 2 = " << num2 << endl;
            cout << "Sum = " << num1 + num2 << endl;

        }
    } else {
        cout << "Input Array is Empty!" << endl;
    }

    return 0;
}