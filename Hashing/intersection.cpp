#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> getIntersection(int arr1[], int arr2[], int size1, int size2) {
    vector<int> common_elements;
    unordered_set<int> uset1;
    for(int i = 0; i < size1; i++) {
        uset1.insert(arr1[i]);
    }
    for(int i = 0; i < size2; i++) {
        if(uset1.find(arr2[i]) != uset1.end())
            common_elements.push_back(arr2[i]);
            uset1.erase(arr2[i]);
    }
    return common_elements;
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
    vector<int> common_elements = getIntersection(arr1, arr2, size1, size2);
    for(auto i: common_elements)
        cout << i << " ";
    cout << endl;
    return 0;
}