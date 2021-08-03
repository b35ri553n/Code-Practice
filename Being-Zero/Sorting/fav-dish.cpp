// A restaurant has D dishes numbered from 1 to D.  
// In a single day N individual customers visited to restaurant and each one chose to order a single dish.  
// Given list of dishes chosen by N customers find the dish that is most famous. 

// For each test case, print a separate line of output - containing most famous dish number and number of times it was ordered.  
// In case there is a tie - print the dish whose dish number is largest.

#include<bits/stdc++.h>
using namespace std;

int ans, freq;
void favDish(int *arr, int n, int d) {
    int count[d + 1];
    memset(count, 0, sizeof(count));
    for(int i = 0; i < n; i++)
        count[arr[i]]++;
    ans = freq = 0;
    for(int i = 0; i <= d; i++) {
        if(count[i] > count[ans]) {
            ans = i;
            freq = count[i];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n, d;
    cin >> t;
    while(t--) {
        cin >> n >> d;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        favDish(arr, n, d);
        cout << ans << " " << freq << "\n";
    }

    return 0;
}