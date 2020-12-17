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

void BFS(vector<int> adj[], int s, vector<bool> &visited) {
    queue<int> q;
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
    cout << endl;
}

int BFSDis(vector<int> adj[], int v) {
    vector<bool> visited(v, false);
    int count = 0;  //number of disconnected components
    for(int i = 0; i < v; i++) {
        if(!visited[i]) {
            BFS(adj, i, visited);
            count++;
        }
    }
    return count;
}

int main() {
    int v = 7;
    vector<int> adj[v]; //array of (size v) vectors
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    // addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    // addEdge(adj, 2, 4);
    // addEdge(adj, 4, 3);
    addEdge(adj, 5, 4);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);
    //Source is not given and graph might be disconnected
    cout << BFSDis(adj, v);
    return 0;
}