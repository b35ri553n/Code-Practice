// https://www.interviewbit.com/problems/rotate-matrix/
void Solution::rotate(vector<vector<int> > &A) {
    int r = A.size();
    int c = A[0].size();
    // compute on A of size nxn where n = r < c
    int n = ((r <= c) ? r : c);
    vector<vector<int>> visited(n, vector<int>(n, 0));
    
    // transpose A of size nxn
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(visited[i][j] == 0) {
                swap(A[i][j], A[j][i]);
                visited[i][j] = 1;
                visited[j][i] = 1;
            }
        }
    }
    
    // handle extra rows or cols if A isnt square matrix
    if(r != c) {
        // if there is extra col
        if(n == r) {
            vector<int> lastrow;
            for(int i = 0; i < r; i++) {
                int last = A[i][c - 1];
                A[i].pop_back();
                lastrow.push_back(last);
            }
            A.push_back(lastrow);
            r++;
        }
        // if there is extra row
        else {
            for(int i = c - 1; i >= 0; i--) {
                int last = A[r - 1][i];
                A[r - 1].pop_back();
                A[i].push_back(last);
            }
            A.pop_back();
            r--;
        }
    }
    
    // reverse the rows for 90deg rotation
    for(int i = 0; i < r; i++)
        reverse(A[i].begin(), A[i].end());
}
