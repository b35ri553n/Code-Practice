#include<bits/stdc++.h>
using namespace std;

// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
// and return an array of the non-overlapping intervals that cover all the intervals in the input.

 // TC: O(n + nlogn) SC: O(n)
vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    for(vector<int> interval : intervals) {
        if(merged.empty() || merged.back()[1] < interval[0])
            merged.push_back(interval);
        else {
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }
    return merged;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> intervals;

    for(int i = 0; i < n; i++) {
        int temp1, temp2;
        vector<int> tempvec;
        cin >> temp1 >> temp2;
        tempvec.push_back(temp1);
        tempvec.push_back(temp2);
        intervals.push_back(tempvec);
    }

    vector<vector<int>> merged = mergeIntervals(intervals);

    for(auto i : merged) {
        cout << "[";
        for(int j : i)
            cout << j;
        cout << "]" << endl;
    }

    return 0;
}