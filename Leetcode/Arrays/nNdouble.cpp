#include <bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for(int j = i + 1; j < arr.size(); ++j) {
            if (arr[j] == arr[i] * 2 || arr[j] == (float)arr[i] / 2) return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums {14, 1, 7, 11};
    cout << checkIfExist(nums) << endl;
    return 0;
}