#include<bits/stdc++.h>
using namespace std;

// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.
// You must do it in place.


// Naive algo: store the rows and cols indices in 2 sets where zero occurs. iterate over again and fill those indices w 0s
// Efficient Algo:
// The idea is that we can use the first cell of every row and column as a flag. This flag would determine 
// whether a row or column has been set to zero. This means for every cell instead of going to M+N cells and 
// setting it to zero we just set the flag in two cells. These flags are used later to update the matrix. If the first cell of a row is set to zero this 
// means the row should be marked zero. If the first cell of a column is set to zero this means the column should be marked zero.
// The first cell of row and column for the first row and first column is the same i.e. cell[0][0]. 
// Hence, we use an additional variable to tell us if the first column had been marked or not and the cell[0][0] would be used to tell the same for the first row.
// TC: O(m*n) SC: O(1)
void setZeroes(vector<vector<int>> &matrix, int m, int n) {
    bool isCol = false; 
    for(int i = 0; i < m; i++) {
        if(matrix[i][0] == 0) isCol = true;
        for(int j = 1; j < n; j++) {
            if(matrix[i][j] == 0) {
                matrix[0][j] = 0;
                matrix[i][0] = 0;          
            }
        }
    }
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[0][j] == 0 || matrix[i][0] == 0)
                matrix[i][j] = 0;
        }
    }
    if(matrix[0][0] == 0) {
        for(int i = 0; i < n; i++)
            matrix[0][i] = 0;
    }
    if(isCol) {
        for(int i = 0; i < m; i++)
            matrix[i][0] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            int temp;
            vector<int> tempvec;
            cin >> temp;
            tempvec.push_back(temp);
            matrix.push_back(tempvec);
        }
    }

    setZeroes(matrix, m, n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " "; 
        } 
    }

    return 0;
}