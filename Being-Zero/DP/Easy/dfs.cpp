#include <iostream>
#include <vector>
using namespace std;

void printDFS(vector<vector<int>> graph, vector<bool> &visited, int u) {
	if(visited[u]) return;
	visited[u] = true;
	cout << u << " ";
	for(int v : graph[u]) 
		printDFS(graph, visited, v);
}

int main() {
	// your code goes here
	int t, n, e, d, w, u, v;
	cin >> t;
	while(t--) {
		vector<vector<int>> graph;
		vector<bool> visited(false);
		cin >> n >> e >> d >> w;
		if(d == 0 && w == 0) {
			while(n--)
				cin >> u >> v;
				graph[u].push_back(v);
				graph[v].push_back(u);
		}
		printDFS(graph, visited, graph[0][0]);
        cout << endl;
	}
	return 0;
}