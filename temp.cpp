
#include<bits/stdc++.h>
using namespace std;

int countPairs(int *arr, int n, int t) {
    int c = 0;
    unordered_set<int> left, right;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == t && (left.find(arr[i]) == left.end() || right.find(arr[j]) == right.end())) {
                left.insert(arr[i]);
                right.insert(arr[j]);
                c++;
                cout << arr[i] << " " << arr[j] << "\n";
            }
        }
    }
    return c;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, t;
    cin >> n >> t;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    cout << countPairs(arr, n, t) << "\n";

    return 0;
}