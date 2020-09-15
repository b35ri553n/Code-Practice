#include <bits/stdc++.h>
using namespace std;


//Erase Remove Idiom
int removeElement(vector<int>& nums, int val) {
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
}

int main() {
    vector<int> nums {0, 1, 2, 2, 3, 0, 4, 2};
    cout << removeElement(nums, 2) << endl;
    return 0;
}