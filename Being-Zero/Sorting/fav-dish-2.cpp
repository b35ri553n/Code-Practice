// 	A restaurant has D dishes numbered from A to B.  
// In a single day N individual customers visited to restaurant and each one chose to order a single dish.  
// Given list of dishes chosen by N customers find the dish that is most famous. 

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int ans, freq;
void favDish(int *arr, int n, int a, int b) {
    int count[b - a + 1];
    ans = freq = 0;
    memset(count, 0, sizeof(count));
    for(int i = 0; i < n; i++) 
        count[arr[i] - a]++;
    for(int i = 0; i < b - a + 1; i++) {
        if(count[i] >= freq) {
            freq = count[i];
            ans = i + a;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n;
    ll a, b;
    cin >> t;
    while(t--) {
        cin >> n >> a >> b;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        favDish(arr, n, a, b);
        cout << ans << " " << freq << "\n";
    }

    return 0;
}