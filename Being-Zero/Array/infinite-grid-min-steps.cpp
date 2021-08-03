// https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int minsteps = 0;
    int n = A.size();
    if(n == 1) return 0;
    for(int i = 1; i < n; i++) {
        // diagonal points
        if(A[i] == A[i - 1] + 1 && B[i] == B[i - 1] + 1
        || A[i] == A[i - 1] - 1 && B[i] == B[i - 1] + 1
        || A[i] == A[i - 1] - 1 && B[i] == B[i - 1] - 1
        || A[i] == A[i - 1] + 1 && B[i] == B[i - 1] - 1 
        // horizontal and vertical points
        || A[i] == A[i - 1] + 1 && B[i] == B[i - 1]
        || A[i] == A[i - 1] - 1 && B[i] == B[i - 1]
        || A[i] == A[i - 1] && B[i] == B[i - 1] + 1
        || A[i] == A[i - 1] && B[i] == B[i - 1] - 1) minsteps++;
        else {
            minsteps += (max(abs(A[i] - A[i - 1]), abs(B[i] - B[i - 1])));
        }
    }
    return minsteps;
}
