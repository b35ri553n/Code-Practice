#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n1, n2, a, b, lcm, gcd;
        cin >> n1 >> n2;
        a = n1;
        b = n2;
        while (n1 != n2) {
            if (n1 > n2) n1 -= n2;
            else if (n2 > n1) n2 -= n1;
        }
        gcd = n1;
        lcm = (a * b) / gcd;
        cout << gcd << " " << lcm << endl;
    }
}