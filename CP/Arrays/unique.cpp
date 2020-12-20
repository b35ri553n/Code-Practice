#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    vector<int>::iterator ip = unique(nums.begin(), nums.end());
    nums.resize(distance(nums.begin(), ip));
    return nums.size();
}

int main() {
    vector<int> nums {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << removeDuplicates(nums) << endl;
    return 0;
}