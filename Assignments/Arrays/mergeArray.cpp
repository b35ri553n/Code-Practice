#include <iostream>
using namespace std;

// int * sortArr(int * arr, int size) {        //bubble sort
//     for(int i = 0; i < size; i++) {
//         int flag = 0;                       //to check if swap took place or not
//         for(int j = 0; j < size - i - 1; j++) {
//             if(arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;            
//                 flag = 1;
//             }
//         }
//         if(!flag) break;
//     }
//     return arr;
// }

// int * mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size)
// {
//     int * arr3 = new int[arr1Size + arr2Size]; // creating new array
//     // Write your code here
//     for(int i = 0; i < arr1Size; i++) 
//         arr3[i] = arr1[i];
//     for(int i = 0; i < arr2Size; i++)
//         arr3[i + arr1Size] = arr2[i];
    
//     return sortArr(arr3, arr1Size + arr2Size); // returning array
// }

int * mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size)
{
    int * arr3 = new int[arr1Size + arr2Size]; // creating new array
    // Write your code here
    int i = 0, j = 0, k = 0;
    while(i < arr1Size && j < arr2Size) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < arr1Size) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j < arr2Size) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    
    return arr3; // returning array
}

int main() {
    int size1 = 5, size2 = 3;
    int arr[size1] = {1,12,14,17,23}; // creating array 1
    int arr1[size2] = {11,19,27};  // creating array 2
    int * arr2 = mergeArrays(arr, arr1, size1, size2); // calling mergeArrays
    for(int i=0; i< size1+size2 ; i++) {
        cout << arr2[i] << " ";
    }
    delete arr2;  // deleting pointer
    return 0;
}