#include<bits/stdc++.h>
using namespace std;

// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it 

// TC: O(n^2) SC:O(n^2)
vector<vector<int>> pascalsTriangle(int n) {
    vector<vector<int>> pascal(n);
    for(int i = 0; i < n; i++) {
        pascal[i].resize(i + 1);
        pascal[i][0] = pascal[i][i] = 1;
        for(int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j]; 
        }
    }
    return pascal;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> pascal = pascalsTriangle(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}