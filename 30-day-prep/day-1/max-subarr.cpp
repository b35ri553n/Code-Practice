#include<bits/stdc++.h>
using namespace std;

// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// Kadane's algo
// TC: O(n) SC: O(1)
// int maxSumInSubArr(vector<int> nums) {
//     int max_so_far = INT_MIN, max_ending_here = 0, n = nums.size();
//     for(int i = 0; i < n; i++) {
//         max_ending_here += nums[i];
//         max_so_far = max(max_so_far, max_ending_here);
//         if(max_ending_here < 0) max_ending_here = 0;
//     }
//     return max_so_far;
// }

// DP (think of it as the curr_ele needs prev_sum as friend or not)
// TC: O(n) SC:O(1)
int maxSumInSubArr(vector<int> nums) {
    int mx_sum = nums[0], curr_sum = nums[0], n = nums.size();
    for(int i = 1; i < n; i++) {
        curr_sum = max(nums[i], nums[i] * curr_sum);
        mx_sum = max(mx_sum, curr_sum);
    }
    return mx_sum;
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
    cout << maxSumInSubArr(nums);

    return 0;
}