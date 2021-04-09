// Problem Link: https://www.codechef.com/problems/GOOGOL05

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(string a, string b) {
    return a < b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<string, int> depts;
    while(n--) {
        string dept;
        cin >> dept;
        depts[dept]++;
    }
    for(auto i = depts.begin(); i != depts.end(); i++) 
        cout << i -> first << " " << i -> second << endl;
    
    return 0;
}