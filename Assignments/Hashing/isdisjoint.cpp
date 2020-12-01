#include <unordered_set>
#include <iostream>
using namespace std;

bool isDisjoint(int* arr1, int* arr2, int size1, int size2) {

// Your code here
    unordered_set<int> set1;
    for(int i = 0; i < size1; i++)
        set1.insert(arr1[i]);
    for(int i = 0; i < size2; i++)  {
        if(set1.find(arr2[i]) != set1.end())
            return false;
    }
    return true;

}


int main() {
    // Accept input from  the user and display the result
    int size1, size2;
    cin >> size1;
    int arr1[size1];
    for(int i = 0; i < size1; i++)
        cin >> arr1[i];
    cin >> size2;
    int arr2[size2];
    for(int i = 0; i < size2; i++)
        cin >> arr2[i];
    cout << isDisjoint(arr1, arr2, size1, size2) << endl;
    return 0;
}