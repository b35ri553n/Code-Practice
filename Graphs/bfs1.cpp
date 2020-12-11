#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printList(vector<int> adj[], int v) {
    for(int i = 0; i < v; i++) {
        for(auto x: adj[i])
            cout << x << " ";
        cout << endl;
    }
}

void printBFS(vector<int> adj[], int v, int s) {
    queue<int> q;
    vector<bool> visited(v, false);
    q.push(s);
    visited[s] = true;
    while(!(q.empty())) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for(int x: adj[curr]) {
            if(!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

int main() {
    int v = 5;
    vector<int> adj[v]; //array of (size v) vectors
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 4, 3);
    int s = 0; //s is source of graph
    printBFS(adj, v, s);
    return 0;
}