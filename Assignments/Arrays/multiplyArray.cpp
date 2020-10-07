#include <iostream>

using namespace std;

int * findProduct(int arr[], int size) {
    int * product = new int[size];
    // Write your code here
    int prod = 1, flag = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i]) prod *= arr[i];
        else flag = 1;      //we have a zero in array
    }
    for(int i = 0; i < size; i++) {
        if(flag == 1 && arr[i]) product[i] = 0;
        else if(flag == 1 && !arr[i]) product[i] = prod;
        else product[i] = prod / arr[i];
    }
    return product;
}

int main() {
    int size = 4;
    int arr[size] = {1, 3, 4, 5};

    cout << "Array before product: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int * prodArray = findProduct(arr, size);

    cout << "Array after product: ";
    for (int i = 0; i < size; i++) {
        cout << prodArray[i] << " ";
    }
    cout << endl;
    delete[] prodArray;
    return 0;
}