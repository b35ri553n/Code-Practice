// https://leetcode.com/problems/relative-ranks/

vector<string> findRelativeRanks(vector<int>& score) {
    priority_queue<pair<int, int>> pq;
    int n = score.size(), count = 1;
    vector<string> ans(n, "");
    for(int i = 0; i < n; i++) 
        pq.push(make_pair(score[i], i));
    while(pq.size()) {
        if(count == 1) ans[pq.top().second] = "Gold Medal";
        else if(count == 2) ans[pq.top().second] = "Silver Medal";
        else if(count  == 3) ans[pq.top().second] = "Bronze Medal";
        else ans[pq.top().second] = to_string(count);
        count++;
        pq.pop();
    }
    return ans;
}