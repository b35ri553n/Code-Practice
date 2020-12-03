#include <iostream>
#include <unordered_set>
using namespace std;

bool isSumZero(int *arr, int size) {
    unordered_set <int> s;
    int pre_sum = 0;
    for(int i = 0; i < size; i++) {
        pre_sum += arr[i];
        if(pre_sum = 0) return true;
        else if(s.find(pre_sum) != s.end()) return true;
        else s.insert(pre_sum);
    }
    return false;
}

int main() {
    int arr[] = {1, -1, 13, 10, -3, 5};
    int size = 6;
    // Naive Approach
    // for(int i = 0; i < size; i++) {
    //     int current_sum = 0;
    //     for(int j = i; j < size; j++) {
    //         current_sum += arr[j];
    //         if(!current_sum) cout << "Found";
    //     }
    // }
    cout << isSumZero(arr, size);
    return 0;
}