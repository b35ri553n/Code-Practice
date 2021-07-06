#include<bits/stdc++.h>
using namespace std;

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

// naive approach that doesnt satisfy the constraints
// i.e., array is modified
// TC: O(nlogn) SC: O(1)
// int findDuplicate(vector<int> nums) {
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     for(int i = 0; i < n - 1; i++) {
//         if(nums[i] == nums[i + 1])
//             return nums[i];
//     }
//     return -1;
// }

// naive approach that doesnt satisfy the constraints
// i.e., extra space is used
// TC: O(n) SC: O(n)
// int findDuplicate(vector<int> nums) {
//     unordered_set<int> s;
//     int n = nums.size();
//     for(int i = 0; i < n; i++) {
//         if(s.find(nums[i]) == s.end())
//             s.insert(nums[i]);
//         else return nums[i];
//     }
//     return -1;
// }

// Floyd's tortoise hare algo
// TC: O(n)
// SC: O(1)
int findDuplicate(vector<int> nums) {
    // find intersection point
    int tortoise = nums[0], hare = nums[0];
    do {
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];
    } while(tortoise != hare);
    // get tortoise back to start 
    tortoise = nums[0];
    while(tortoise != hare) {
        tortoise = nums[tortoise];
        hare = nums[hare];
    }
    return hare;
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
    cout << findDuplicate(nums);

    return 0;
}