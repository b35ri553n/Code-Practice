#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int g1, g2;
	    cin >> g1 >> g2;
	    int min_g = (g1 > g2) ? g1: g2;
	    int max_g = g1 + g2;
	    cout << min_g << " " << max_g << endl;
	}
	return 0;
}
