#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> getIntersection(int arr1[], int arr2[], int size1, int size2) {
    vector<int> union_elements;
    unordered_set<int> uset1;
    for(int i = 0; i < size1; i++) {
        uset1.insert(arr1[i]);
    }
    for(int i = 0; i < size2; i++) {
        uset1.insert(arr2[i]);
    }
    for(auto i: uset1) 
        union_elements.push_back(i);
    return union_elements;
}

int main() {
    int size1, size2;
    cin >> size1;
    int arr1[size1];
    for(int i = 0; i < size1; i++)
        cin >> arr1[i];
    cin >> size2;
    int arr2[size2];
    for(int i = 0; i < size2; i++) 
        cin >>arr2[i];
    vector<int> union_elements = getIntersection(arr1, arr2, size1, size2);
    for(auto i: union_elements)
        cout << i << " ";
    cout << endl;
    return 0;
}