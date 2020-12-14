#include <iostream>
using namespace std;

void lomutoPartition(int *arr, int l, int h) {
    int pivot = arr[h];     //last element ia always pivot
    //if pivot is not last element then just do: swap(arr[h], arr[p]);
    int i = l - 1;      //points to the last element of smaller elements window
    for(int j = l; j < h; j++) {
        if(arr[j] < pivot)
            swap(arr[++i], arr[j]);     
        //^swap the smaller element with the element that is first in larger elements window
    }
    swap(arr[i + 1], arr[h]);
}

int main() {
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    lomutoPartition(arr, 0, 6);
    for(int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    return 0;
}