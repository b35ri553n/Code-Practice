#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unsigned long long int fact = 1;
        for(int i = n; i >= 1; --i)
            fact *= i;
        cout << fact << endl;
    }
}