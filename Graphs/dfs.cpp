#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFSRec(vector<int> adj[], int s, vector<bool> &visited) {
    visited[s] = true;
    cout << s << " ";
    for(int u: adj[s]) {
        if(!visited[u]) {
            DFSRec(adj, u, visited);
        }
    }
}

void DFS(vector<int> adj[], int v, int s) {
    vector<bool> visited(v, false);
    DFSRec(adj, s, visited);
}

int main() {
    int v = 5;
    vector<int> adj[v]; //array of (size v) vectors
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    // addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 4, 3);
    int s = 0; //s is source of graph
    DFS(adj, v, s);
}