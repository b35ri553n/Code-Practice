// You are given the lengths of N rods. You want to connect all the rods to form a single rod. 
// The cost of connecting 2 rods of lengths: L1 and L2 is L1+L2. 
// The resultant rod will also be of size L1+L2. 
// Your task is to find the minimum cost to connect all the rods.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

int minCost(int *arr, int n) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int mcost = 0;
    for(int i = 0; i < n; i++) 
        pq.push(arr[i]);
    while(pq.size() > 1) {
        int ftop = pq.top();
        pq.pop();
        int stop = pq.top();
        pq.pop();
        mcost += ftop + stop;
        pq.push(ftop + stop);
    }
    return mcost;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    // cin.ignore();
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        cout << minCost(arr, n) << endl;
    }

    return 0;
}