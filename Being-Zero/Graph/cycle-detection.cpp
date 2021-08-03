// Given an UNDIRECTED graph detect, if it has cycle.

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

int nv;
bool cycle = false;

void hasCycle(map<int, vector<int>> g, int s, vector<int> visited) {
    visited[s] = 1;
    for(int v : g[s]) {
        if(!visited[v]) {
            visited[v] = 1;
            hasCycle(g, v, visited);
        } else if(visited[v] == 1) {
            visited[v] = 2;
        } else {
            cycle = true;
            exit;
        }
    }
    return;
}

bool hasCycleHelper(map<int, vector<int>> g, int s, vector<int> visited) {
    hasCycle(g, 0, visited);
    return cycle;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, ne, q, x;
    cin >> t;
    while(t--) {
        cin >> nv >> ne;
        map<int, vector<int>> g;
        vector<int> visited;
        for(int i = 0; i < ne; i++) {
            int vertex, neighbor;
            cin >> vertex >> neighbor;
            g[vertex].push_back(neighbor);
            g[neighbor].push_back(vertex);
        }
        for(int i = 0; i < nv; i++)
            visited.push_back(0);
        cout << (hasCycleHelper(g, 0, visited) ? "true" : "false") << endl;
    }

    return 0;
}