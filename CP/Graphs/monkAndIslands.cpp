// Write your code here
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int findBridges(vector<int> v[], int size, int bridge1) {
	queue<int> bridges;
	vector<bool> visited(size, false);
	bridges.push(bridge1);
	vector<int> n_bridges(size, 0);
	visited[bridge1] = true;
	while(!bridges.empty()) {
		int bridge = bridges.front();
		bridges.pop();
		for(auto x: v[bridge]) {
			if(!visited[x]) {
				visited[x] = true;
				n_bridges[x] = n_bridges[bridge] + 1;
				bridges.push(x);
			}
		}
	}
	return n_bridges[size - 1];
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int m, n;
		cin >> n >> m;
		vector<int> v[n + 1];
		for(int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
		}
		int minBridges = findBridges(v, n + 1, 1);
		cout << minBridges << endl;
	}
	return 0;
}