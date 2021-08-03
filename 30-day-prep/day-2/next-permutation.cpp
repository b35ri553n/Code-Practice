#include<bits/stdc++.h>
using namespace std;

// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
// If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
// The replacement must be in place and use only constant extra memory.

void nextPermutation(vector<int> &nums) {
    int n = nums.size();
    for(int i = n - 1; i > 0; i--) {
        if(nums[i] > nums[i - 1]) {
            if(i == 1) {
                swap(nums[0], *min_element(nums.begin() + 1, nums.end()));
                return;
            }
            swap(nums[i], nums[i - 1]);
            return;
        }
    }
    sort(nums.begin(), nums.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    nextPermutation(nums);

    for(int i = 0; i < n; i++)
        cout << nums[i] << " ";
    return 0;
}