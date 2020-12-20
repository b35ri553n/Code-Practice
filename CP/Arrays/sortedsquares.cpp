#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& A) {
    vector<int> squared;
    for (auto it = A.begin(); it != A.end(); ++it) {
        squared.push_back((int)(pow(*it, 2) + 0.5));
    }
    sort(squared.begin(), squared.end());
    return squared;
}

int main() {
    vector<int> nums {-4, -1, 0, 3, 10};
    for(auto x: sortedSquares(nums)) 
        cout << x << " ";
    return 0;
}