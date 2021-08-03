// Given a Connected UnWeighted Graph, Calculate the Length of Shortest Distance from given vertex to all other vertices.  
// Vertices are numbered from 0 to V-1.

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

vector<int> sssp(map<int, vector<int>> g, int s) {
    int n = g.size();
    vector<int> dist(n, -1);
    dist[s] = 0;
    queue<int> q;
    q.push(s);
    while(!q.empty()) {
        int s = q.front();
        q.pop();
        for(int x : g[s]) {
            if(dist[x] == -1) {
                dist[x] = dist[s] + 1;
                q.push(x);
            }
        }
    }
    return dist;
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
            vector<int> v = sssp(g, x);
            for(int i : v)
                cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}