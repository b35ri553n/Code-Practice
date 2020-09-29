#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == nums[i + 1]) {
            
        }
    }
    return nums.size();
}

int main() {
    vector<int> nums {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << removeDuplicates(nums) << endl;
    return 0;
}