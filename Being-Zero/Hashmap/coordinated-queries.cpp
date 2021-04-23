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
    
    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        cin.ignore();
        unordered_map<string, pair<ll, ll>> m;
        while(n--) {
            string name;
            ll latitude, longitude;
            cin >> name;
            cin >> latitude >> longitude;
            m[name] = make_pair(latitude, longitude);
        }
        while(q--) {
            ll latitude, longitude;
            bool flag = false;
            cin >> latitude >> longitude;
            for(auto i = m.begin(); i != m.end(); i++) {
                if(((i -> second).first == latitude) && ((i -> second).second == longitude)) {
                    cout << i -> first << endl;
                    flag = true;
                }
            }
            if(flag == false) cout << -1 << endl;
        }
        cout << endl;
    }
    return 0;
}