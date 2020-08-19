#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        bool flag = true;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        for(int i = 0; i < n; ++i){
            if(arr[i] % 2 == 0){
                cout << "NO" << endl;
                flag = false;
                break;
            } 
        }
        if(flag)
            cout << "YES" << endl;
    }
    return 0;
}