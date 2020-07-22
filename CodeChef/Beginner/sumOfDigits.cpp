#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    long int n, tot = 0;
	    cin >> n;
	    while(n){
	        tot += (n % 10);
	        n /= 10;
	    }
	    cout << tot << endl;
	}
	return 0;
}