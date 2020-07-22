#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int fdigit = (n / pow(10, (to_string(n).size() - 1)));
        int ldigit = (n % 10);
        cout << fdigit + ldigit << endl;
    }
}