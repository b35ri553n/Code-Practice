#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n) {
        int arr[n];
        bool flag = true;
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        for(int i = 1; i <= n; ++i){
            if(i != arr[arr[i - 1] - 1])
                flag = false;
        }
        cout << (flag ? "ambiguous": "not ambiguous") << endl;
        cin >> n;
    }
    return 0;
}