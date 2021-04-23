//Given height of adjacent buildings, find the largest rectangular area possible, where the largest rectangle can be made of a number of contiguous buildings. 
// For simplicity, assume that all buildings have same width and the width is 1 unit.
// Note: The sides of rectangle has to be parallel to the axes.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

vector<int> leftSmallestIndex(vector<int> v) {
    int n = v.size();
    stack<int> stk;
    vector<int> lsiVec(n);
    for(int i = n - 1; i >= 0; i--) {
        while(!stk.empty() && v[i] < v[stk.top()]) {
            lsiVec[stk.top()] = i;
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty()) {
        lsiVec[stk.top()] = -1;
        stk.pop();
    }
    return lsiVec;
}

vector<int> rightSmallestIndex(vector<int> v) {
    int n = v.size();
    stack<int> stk;
    vector<int> rsiVec(n);
    for(int i = 0; i < n; i++) {
        while(!stk.empty() && v[i] < v[stk.top()]) {
            rsiVec[stk.top()] = i;
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty()) {
        rsiVec[stk.top()] = n;
        stk.pop();
    }
    return rsiVec;
}

ll areaOfLargestRect(vector<int> v) {
    int n = v.size();
    if(n == 1) return v[0];
    ll max_area = 0;
    vector<int> rsiVec = rightSmallestIndex(v);
    vector<int> lsiVec = leftSmallestIndex(v);
    for(int i = 0; i < n; i++) {
        int rsi = rsiVec[i], lsi = lsiVec[i], max_width = (rsi - (lsi + 1));
        max_area = max(max_area, ll(max_width * v[i]));
    }
    return max_area;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    // cin.ignore();
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) 
            cin >> v[i];
        cout << areaOfLargestRect(v) << endl;
    }

    return 0;
}