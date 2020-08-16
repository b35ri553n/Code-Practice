#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int input_arr[100][100];
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j <= i; ++j) {
                cin >> input_arr[i][j];
            }
        }
        for(int i = n - 2; i >= 0; --i) {
            for(int j = 0; j <= i; ++j){
                input_arr[i][j] += max(input_arr[i + 1][j], input_arr[i + 1][j + 1]); 
            }
        }
        cout << input_arr[0][0] << endl;
    }
	return 0;
}
