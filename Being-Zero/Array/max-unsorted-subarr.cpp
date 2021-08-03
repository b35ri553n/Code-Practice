// https://www.interviewbit.com/problems/maximum-unsorted-subarray/

vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> B = A;
    vector<int> res;
    sort(B.begin(), B.end());
    if(A == B) {
        res.push_back(-1);
        return res;
    }
    int n = A.size();
    for(int i = 0; i < n; i++) {
        if(A[i] != B[i]) {
            res.push_back(i);
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--) {
        if(A[i] != B[i]) {
            res.push_back(i);
            break;
        }
    }
    return res;
}