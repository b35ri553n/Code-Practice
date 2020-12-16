#include <iostream>
using namespace std;

void DutchNationalFlag(int arr[], int size) {
  // write your code here
    int range = 3;
    int count[range];
    for(int i = 0; i < range; i++)
        count[i] = 0;
    for(int i = 0; i < size; i++)
        count[arr[i]]++;
    int index = 0;
    for(int i = 0; i < range; i++) {
        for(int j = 0; j < count[i]; j++)
            arr[index++] = i;
    }
  // printing
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    DutchNationalFlag(arr, size);
}