// https://www.interviewbit.com/problems/largest-number/
bool cmp(string a, string b)
{
    return a+b > b+a;
}

string Solution::largestNumber(const vector<int> &A) {
    int n = A.size();
    vector<string> strA(n);
    for(int i = 0; i < n; i++)
        strA[i] = to_string(A[i]);
    sort(strA.begin(), strA.end(), cmp);
    string ans = "";
    for(auto i : strA)
        ans += i;
    if(ans[0] == '0') return "0";
    return ans;
}
