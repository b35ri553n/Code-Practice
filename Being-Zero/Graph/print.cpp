// Create A Graph from Given Input Format.  Vertices are numbered from 0 to V-1.
// Create ADJ List REPRESENTATION - Insert At End of List Always.

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

void printGraph(map<int, vector<int>> g)
{
    for(auto i = g.begin(); i != g.end(); i++) {
        cout << i -> first << " :";
        for(int j = 0; j < i -> second.size(); j++) 
            cout << " " << (i -> second)[j];
        cout << endl;
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, v, e;
    cin >> t;
    // cin.ignore();
    // for(int i = 0; i <= N; i++) 
    //     dp[i] = -1;
    while(t--) {
        cin >> v >> e;
        map<int, vector<int>> g;
        for(int i = 0; i < e; i++) {
            int vertex, neighbor;
            cin >> vertex >> neighbor;
            g[vertex].push_back(neighbor);
            g[neighbor].push_back(vertex);
        }
        printGraph(g);
        cout << endl;
    }

    return 0;
}