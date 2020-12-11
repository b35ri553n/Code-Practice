#include <iostream>
#include <vector>
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

int main() {
    int v = 4;
    vector<int> adj[v]; //array of (size v) vectors
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    printList(adj, v);
    return 0;
}