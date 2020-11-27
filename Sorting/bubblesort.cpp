#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 1, 8, 9, 4, 7};
    int size = 6;
    for(int i = 0; i < size - 2; i++) {
        for(int j = 0; j <= size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) 
                swap(arr[j], arr[j + 1]);
        }
    }
    for(auto i: arr)
        cout << i << " ";
    return 0;
}
