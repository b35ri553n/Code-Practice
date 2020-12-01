#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool getPair(int arr[], int size, int sum) {
    unordered_set<int> uset;
    for(int i = 0; i < size; i++) {
        if(uset.find(sum - arr[i]) != uset.end()) 
            return true;
        else 
            uset.insert(arr[i]);
    }
    return false;
}

int main() {
    int size, sum;
    cin >> sum >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    cout << getPair(arr, size, sum);
    return 0;
}