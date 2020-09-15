#include <bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {
    int neven_digit = 0;
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        int ndigits = 0;
        while (*it) {
            *it /= 10;
            ++ndigits;
        }
        if (!(ndigits % 2)) ++neven_digit;
    }
    return neven_digit;
}

int main() {
    vector<int> nums {12, 345, 2, 6, 7896};
    cout << findNumbers(nums) << endl;

    return 0;
}