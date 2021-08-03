// In an anonymous language which contain alphabets of english but alphabets are in different order.
// So,given somewords which are sorted according to the order alphabets in that language.
// Return an array containing the alphabets of the anonymous language in order.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
#define N 1000000
// for(int i = 0; i < n; i++) 
ll dp[N + 1];

ll modSum(ll a, ll b) {
    return (a % M + b % M) % M;
}

ll modProd(ll a, ll b) {
    return (a % M * b % M) % M;
}

ll modDiff(ll a, ll b) {
    return (a % M - b % M + M) % M;
}

// Kahn's Algo
void findOrder(map<int, vector<int>> g) {
    // TODO: Complete this function
    int n = g.size();
    int indeg[n + 1];

    // init array to 0
    memset(indeg, 0, sizeof(indeg));

    // Fill indeg
    for(auto i = g.begin(); i != g.end(); i++) {
        for(int j = 0; j < (i -> second).size(); j++)
            indeg[(i -> second)[j]]++;
    }
    
    queue<int> q;
    for(int i = 1; i <= n; i++) {
        if(indeg[i] == 0) q.push(i);
    }
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for(int x : g[curr]) {
            indeg[x]--;
            if(indeg[x] == 0)
                q.push(x);  
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n;
    vector<string> words;
    cin >> t;
    // cin.ignore();
    // for(int i = 0; i <= N; i++) 
    //     dp[i] = -1;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            string word;
            cin >> word;
            words.push_back(word);
        }
        // FIXME: create graph
        map<char, vector<char>> g;
        for(int i = 0; i < n; i++) {
            int vertex, neighbor;
            cin >> vertex >> neighbor;
            g[vertex].push_back(neighbor);
        }
        findOrder(g);
    }

    return 0;
}