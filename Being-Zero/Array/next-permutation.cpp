// https://leetcode.com/problems/next-permutation/submissions/
// void nextPermutation(vector<int>& nums) {
//     int i, n = nums.size();
//     for(i = n - 1; i > 0; i--) 
//         if(nums[i - 1] < nums[i]) break;
    
//     if(i == 0) {
//         reverse(nums.begin(), nums.end());
//         return;
//     }
//     int immediate_large = INT_MAX, idx;
//     for(int j = i; j < n; j++) {
//         if(nums[j] > nums[i - 1] && nums[j] <= immediate_large) {
//             immediate_large = nums[j];
//             idx = j;
//         }
//     }
//     swap(nums[i - 1], nums[idx]);
//     reverse(nums.begin() + i, nums.end());
// }

#include <bits/stdc++.h>
using namespace std;

bool flag = true;
void nextPermutation(int *nums, int n) {
    // for(int  i = 0; i < n; i++) {
    //     if(nums[i] > 9) 
    // }
  	int i;
    for(i = n - 1; i > 0; i--) 
        if(nums[i - 1] < nums[i]) break;
    
    if(i == 0) {
      	flag = false;
        return;
    }
    int immediate_large = INT_MAX, idx;
    for(int j = i; j < n; j++) {
        if(nums[j] > nums[i - 1] && nums[j] <= immediate_large) {
            immediate_large = nums[j];
            idx = j;
        }
    }
    swap(nums[i - 1], nums[idx]);
    reverse(nums + i, nums + n);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
  	cin >> t;
  	while(t--) {
    	int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        
        nextPermutation(arr, n);
        if(flag) {
            for(int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << "\n";
        } else cout << "IMPOSSIBLE" << "\n";
    } 
    
    return 0;
}