#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int max_so_far = 0; //max no of 1s
    int count = 0; //count of 1s in a window
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i]) {
            ++count;
            if(max_so_far < count) max_so_far = count;
        }
        else
            count = 0;
    }
    return max_so_far;
}

int main() {
    vector<int> nums {1, 1, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums) << endl;

    return 0;
}

