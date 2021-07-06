#include<bits/stdc++.h>
using namespace std;

// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
// representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.
// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. 
// To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, 
// and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// merge function of merge sort
// TC: O(m + n) SC: O(m + n)
// void mergeTwoSortedArrays(vector<int> &nums1, int m, vector<int> &nums2, int n) {
//     int i = 0, j = 0, k = 0;
//     vector<int> nums3;
//     while(i < m && j < n) {
//         if(nums1[i] <= nums2[j]) 
//             nums3.push_back(nums1[i++]);
//         else 
//             nums3.push_back(nums2[j++]);
//     }
//     while(i < m) 
//         nums3.push_back(nums1[i++]);
//     while(j < n)
//         nums3.push_back(nums2[j++]);
//     nums1.clear();
//     for(int num : nums3)
//         nums1.push_back(num);
// }

// merge function of merge sort in-place
// TC: O(m + n) SC: O(1)
void mergeTwoSortedArrays(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while(i >= 0 && j >= 0) {
        if(nums1[i] > nums2[j]) 
            nums1[k--] = nums1[i--];
        else 
            nums1[k--] = nums2[j--];
    }
    while(j >= 0)
        nums1[k--] = nums2[j--];
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> nums1, nums2;
    for(int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        nums1.push_back(temp);
    }
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums2.push_back(temp);
    }
    for(int i = 0; i < n; i++) 
        nums1.push_back(0);
    mergeTwoSortedArrays(nums1, m, nums2, n);
    for(int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }

    return 0;
}