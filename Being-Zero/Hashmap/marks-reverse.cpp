// You are given a list of students with their marks in each subject. 
// When asked for a student, print his marks in various subjects - in reverse order in which they were given in INPUT.

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
    unordered_map<string, vector<int>> m;
    while(n--) {
        string sname;
        int marks;
        cin >> sname >> marks;
        if(m.find(sname) != m.end()) m[sname].push_back(marks);
        else m[sname].push_back(marks);
    }
    int q;
    cin >> q;
    while(q--) {
        string sname;
        cin >> sname;
        for(int i = m[sname].size() - 1; i >= 0; i--)
            cout << m[sname][i] << " ";
        cout << endl;
    }
    return 0;
}