// https://www.interviewbit.com/problems/max-distance/

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    return p1.first < p2.first;
}

int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if(n == 1 || n == 0) return 0;
    
    vector<pair<int, int>> v;
    
    for(int i = 0; i < n; i++) 
        v.push_back(make_pair(A[i], i));
    
    sort(v.begin(), v.end(), cmp);
    
    int maxIndex = v[n - 1].second, max_diff = INT_MIN; // -Infinity
    vector<int> m(n - 1, 0);
    for(int i = n - 2; i >= 0; i--) {
        maxIndex = max(maxIndex, v[i + 1].second);
        m[i] = maxIndex;
    }
    
    for(int i = 0; i < n - 1; i++) {
        max_diff = max(max_diff, m[i] - v[i].second);
        max_diff = max(max_diff, 0);
    }
    
    return max_diff;
}
