//city modernization
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int getMinSum(vector<int> projects, vector<int> costs) {
    unordered_map<int, int> mincosts;
    for(int i = 0; i < projects.size(); i++) {
        if(mincosts.find(projects[i]) != mincosts.end()) {
            if(mincosts[projects[i]] > costs[i])
                mincosts[projects[i]] = costs[i];
        }
        else
            mincosts[projects[i]] = costs[i];
    }
    int minsum = 0;
    for(auto i: mincosts) 
        minsum += i.second;
    return minsum;
}

int main() {
    vector<int> projects = {2, 0, 1, 2};
    vector<int> costs = {8, 7, 6, 9};
    int minSum = getMinSum(projects, costs);
    cout << minSum << endl;
}