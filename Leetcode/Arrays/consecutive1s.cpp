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

    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n + 1; ++i) {
            if (i == n) {
                while(arr.size() - n) arr.pop_back();
                return;
            }
            if (arr[i] == 0) {
                arr.insert(arr.begin() + i, 0);
                ++i;
            }
        }
    }