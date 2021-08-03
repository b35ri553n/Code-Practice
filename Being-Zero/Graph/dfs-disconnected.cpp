// Given A Graph and A Start Vertex.  Print the nodes in DFS (Depth First Search) order, RECURSIVELY.  
// Since Graph is Disconnected - Need to do a DFS for all vertices in order (0 to Vertices-1).  
// Note:  Do Not Print Any NewLine in the End, Just Print Vertices Space Separated in Single Line.

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
vector<bool> visited;

void printDFS(map<int, vector<int>> g, int s)
{   
    if(visited[s]) return;
    visited[s] = true;
    cout << s << " ";
    for(int v : g[s])
        printDFS(g, v);
}

void dfs(map<int, vector<int>> g) {
    for(int i = 0; i < nv; i++) 
        printDFS(g, i);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, ne;
    cin >> t;
    // cin.ignore();
    // for(int i = 0; i <= N; i++) 
    //     dp[i] = -1;
    while(t--) {
        cin >> nv >> ne;
        map<int, vector<int>> g;
        visited.clear();
        for(int i = 0; i < ne; i++) {
            int vertex, neighbor;
            cin >> vertex >> neighbor;
            g[vertex].push_back(neighbor);
            g[neighbor].push_back(vertex);
        }
        for(int i = 0; i < nv; i++)
            visited.push_back(false);
        dfs(g);
    }

    return 0;
}