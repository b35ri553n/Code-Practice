#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int count = 0;
	    while(n > 2) {
	        count += (n - 2) / 2;
	        n -= 2;
	    }
	    cout << count << endl;
	}
	return 0;
}
