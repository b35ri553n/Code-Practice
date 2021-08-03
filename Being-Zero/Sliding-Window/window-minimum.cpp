// For a given array of n elements and an integer L, find the minimum of each possible sub-arrays with size L

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

void printMinInAllWindows(int *a, int n, int l) {
    deque<int> dq;
    for(int i = 0; i < n; i++) {
        while(!dq.empty() && a[dq.back()] > a[i])
            dq.pop_back();
        dq.push_back(i);
        
        if(i > l - 1) cout << " " << a[dq.front()];
        else if(i == l - 1) cout << a[dq.front()];
        
        if(i - l + 1 == dq.front()) dq.pop_front();
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, l;
    cin >> n >> l;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    printMinInAllWindows(arr, n, l);
    return 0;
}