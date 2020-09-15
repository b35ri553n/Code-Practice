#include <bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {
    int neven_digit = 0;
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        if (!(to_string(*it).length() % 2)) ++neven_digit;
    }
    return neven_digit;
}

int main() {
    vector<int> nums {12, 345, 2, 6, 7896};
    cout << findNumbers(nums) << endl;

    return 0;
}