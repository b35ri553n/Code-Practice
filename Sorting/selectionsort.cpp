#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 1, 8, 9, 4, 7};
    int size = 6;
    for(int i = 0; i < size - 1; i++) {
        int min_element = i;
        for(int j = i + 1; j <= size - 1; j++) {
            if(arr[min_element] > arr[j]) 
                min_element = j;
        }
        swap(arr[min_element], arr[i]);
    }
    for(auto i: arr)
        cout << i << " ";
    return 0;
}

//i=0 j=1,2,3,4,5 218749
//i=1, j=1,2,3 