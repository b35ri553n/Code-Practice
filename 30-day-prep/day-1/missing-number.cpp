#include<bits/stdc++.h>
using namespace std;

// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.

// Naive: sort and use for loop 
// Naive: use hashmap as count map
// Efficient: Bit manipulation, guass formular for sum of n natural numbers

int missingNumber(vector<int> nums) {
    int x1 = 0, n = nums.size(), x2 = nums[0];
    for(int i = 1; i <= n; i++) 
        x1 = x1 ^ i;
    for(int i = 1; i < n; i++) 
        x2 = x2 ^ nums[i];
    return x1 ^ x2;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << missingNumber(nums);

    return 0;
}