#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string n;
        int tot = 0;
        cin >> n;
        for(int i = 0; i < n.size(); ++i){
            if(n[i] == '4')
                tot++;
        }
        cout << tot << endl;
    }
}