// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

int Solution::maxSubArray(const vector<int> &A) {
    int sum = A[0], max_sum = A[0];
    for(int i = 1; i < A.size(); i++) {
        sum = max(A[i], sum + A[i]);
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}