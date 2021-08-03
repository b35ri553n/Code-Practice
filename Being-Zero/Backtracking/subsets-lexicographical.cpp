// Given an array of unique integer elements, print all the subsets of the given array in lexicographical order.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
#define N 1000000
// for(int i = 0; i < n; i++) 
ll dp[N + 1];

ll modSum(ll a, ll b) {
    return (a % M + b % M) % M;
}

ll modProd(ll a, ll b) {
    return (a % M * b % M) % M;
}

ll modDiff(ll a, ll b) {
    return (a % M - b % M + M) % M;
}

int n;
vector<int> arr;
int path[1000];

void printAllSubsets(int i, int ai) {   // i is the index in path arr that needs filling and ai is index in arr thats going to be TAKEN or LEFT
    if(ai == n) {return;}
    // take arr[ai]
    path[i] = arr[ai];
    // print here itself for lexicographical order
    for(int j = 0; j <= i; j++)
        cout << path[j] << " ";
    cout << "\n";
    printAllSubsets(i + 1, ai + 1);
    // leave arr[ai]
    printAllSubsets(i, ai + 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        arr.clear();
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        printAllSubsets(0, 0);
        cout << "\n";
    }

    return 0;
}