// https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> res;
    int n = A.size();
    //remove all zeros in beginning
    for(int i = 0; i < n; i++) {
        if(A[i] == 0) {
            A.erase(A.begin());
            n--;
            i = -1;
        }
        else break;
    }
    reverse(A.begin(), A.end());
    for(int i = n - 1; i >= 0; i--) {
        A.push_back(A[i]);
    }
    res.push_back((1 + A[0]) % 10);
    int carry = (1 + A[0]) / 10;
    for(int i = 1; i < n; i++) {
        res.push_back((carry + A[i]) % 10);
        carry = (carry + A[i]) / 10;
    }
    if(carry) {
        res.push_back(carry);
    }
    reverse(res.begin(), res.end());
    return res;
}
