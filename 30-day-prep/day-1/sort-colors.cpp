#include<bits/stdc++.h>
using namespace std;

// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are 
// adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

// Naive approach since two traversals are done
// TC: O(n) SC: O(1)
// void sortColors(vector<int> &nums) {
//     int count0 = 0, count1 = 0, count2 = 0, n = nums.size();
//     for(int num : nums) {
//         if(num == 0) count0++;
//         else if(num == 1) count1++;
//         else count2++;
//     }
//     for(int i = 0; i < count0; i++) 
//         nums[i] = 0;
//     for(int i = count0; i < count0 + count1; i++) 
//         nums[i] = 1;
//     for(int i = count0 + count1; i < n; i++)
//         nums[i] = 2;
//     return;
// } 

// Dutch Flag problem variation
// TC: O(n) SC: O(1)
void sortColors(vector<int> &nums) {
    int n = nums.size(), l = 0, m = 0, h = n - 1;
    while(m <= h) {
        if(nums[m] == 0) {
            swap(nums[m], nums[l]);
            l++;
            m++;
        }
        else if(nums[m] == 1) 
            m++;
        else {
            swap(nums[m], nums[h]);
            h--;
        }
    }
    return;
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
    sortColors(nums);
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}