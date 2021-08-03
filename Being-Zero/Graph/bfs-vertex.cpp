// Create A Graph and A Start Vertex.  Print the nodes in BFS (Breadth First Search) order.

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

vector<int> bfs(map<int, vector<int>> g, int s) {
    int n = g.size();
    vector<bool> visited(n, false);
    queue<int> q;
    vector<int> v;
    q.push(s);
    visited[s] = true;
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        v.push_back(curr);
        for(int x : g[curr]) {
            if(!visited[x]) {
                q.push(x);
                visited[x] = true;
            }
        }
    }
    return v;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, nv, ne, q, x;
    cin >> t;
    // cin.ignore();
    // for(int i = 0; i <= N; i++) 
    //     dp[i] = -1;
    while(t--) {
        cin >> nv >> ne;
        map<int, vector<int>> g;
        for(int i = 0; i < ne; i++) {
            int vertex, neighbor;
            cin >> vertex >> neighbor;
            g[vertex].push_back(neighbor);
            g[neighbor].push_back(vertex);
        }
        cin >> q;
        while(q--) {
            cin >> x;
            vector<int> v = bfs(g, x);
            for(int i : v)
                cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}