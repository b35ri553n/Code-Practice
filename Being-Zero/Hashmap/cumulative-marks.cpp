// Given few student names with their marks in various subjects.  Return answer to cumulative score queries.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    cin.ignore();
    unordered_map<string, int> m;
    while(n--) {
        string sname;
        int marks;
        cin >> sname >> marks;
        if(m.find(sname) != m.end()) m[sname] += marks;
        else m[sname] = marks;
    }
    int q;
    cin >> q;
    while(q--) {
        string sname;
        cin >> sname;
        cout << m[sname] << endl;
    }
    return 0;
}