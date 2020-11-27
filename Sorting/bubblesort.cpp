#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 1, 8, 9, 4, 7};
    int size = 6;
    bool swapped;       //optimisation
    for(int i = 0; i < size - 1; i++) {
        swapped = false; 
        for(int j = 0; j <= size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
            if(!swapped)    //if entire is already sorted then within one pass
                break;      //swapped remains false and we can say entire arr is already sorted
        }
    }
    for(auto i: arr)
        cout << i << " ";
    return 0;
}
