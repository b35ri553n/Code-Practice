// Problem Link: https://www.codechef.com/problems/CHFPARTY

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, npeople = 0, ans = 0;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        sort(arr, arr + n);
        for(int i = 0; i < n; i++) {
            if(arr[i] <= npeople) {
                ans++;
                npeople++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}