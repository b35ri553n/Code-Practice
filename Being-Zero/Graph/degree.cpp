// Given a directed un-weighted graph G having V vertices and E edges.  
// Print In-Degree and Out-Degree of Every Vertex of Graph.

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

void printInAndOutDeg(map<int, vector<int>> g, int nv)
{   
    int indeg[nv + 1];
    int outdeg[nv + 1];

    // init arrays to 0
    memset(indeg, 0, sizeof(indeg));
    memset(outdeg, 0, sizeof(outdeg));

    // Fill indeg and outdeg
    for(int i = 1; i <= nv; i++) {
        if(g[i].size() == 0) continue;
        else outdeg[i] = g[i].size();
    }

    for(auto i = g.begin(); i != g.end(); i++) {
        for(int j = 0; j < (i -> second).size(); j++)
            indeg[(i -> second)[j]]++;
    }

    // Print indeg and outdeg
    for(int i = 1; i <= nv; i++)
        cout << indeg[i] << " ";
    cout << endl;
    for(int i = 1; i <= nv; i++)
        cout << outdeg[i] << " ";
    cout << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int nv = 0, ne = 0;
    // cin.ignore();
    // for(int i = 0; i <= N; i++) 
    //     dp[i] = -1;
    while(cin >> nv >> ne) {
        if(nv == -1 && ne == -1) break;
        map<int, vector<int>> g;
        for(int i = 0; i < ne; i++) {
            int vertex, neighbor;
            cin >> vertex >> neighbor;
            g[vertex].push_back(neighbor);
        }
        printInAndOutDeg(g, nv);
        cout << endl;
    }

    return 0;
}